// GA1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <conio.h>

int POP_SIZE=4;
int SIZE=5;

int individu[4][5];
int individuBaru[4][5];
int fitnessValue[5];
int totalFitness,bestFitness;
double percentValue[4];

void init_population(){
    for (int i = 0; i < POP_SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        int r = rand()%2;
        individu[i][j]=r;
      }
    }
}
int fitness(){
    int jum;
    totalFitness=0;
    for (int i = 0; i < POP_SIZE; i++) {
      jum=0;
      for (int j = 0; j < SIZE; j++) {
        jum=jum+individu[i][j];
      }
      fitnessValue[i]=jum;
      totalFitness=totalFitness+jum;
    }
    int max=0;
    for (int i = 0; i < POP_SIZE; i++) {
      if(max<fitnessValue[i])max=fitnessValue[i];
    }
    bestFitness=max;
    for (int i = 0; i < POP_SIZE; i++) {
      printf("Individu[%d]: ",(i+1));
      for (int j = 0; j < SIZE; j++) {
        printf("%d",individu[i][j]);
      }
      printf(" NF:%d\n",fitnessValue[i]);
    }
    printf("Total Fitness:%d Best Fitness:%d\n",totalFitness,bestFitness);
	return bestFitness;
}
  //Selection
void rouletteSelection() {
    double totalPercentFitness = 0.0;
    int k;
    for (int j = 0; j < POP_SIZE; j++) {
      percentValue[j] = (fitnessValue[j] * 100.0) / totalFitness;
      printf("Percent individu[%d]:%.2f\n",(j+1),percentValue[j]);
      totalPercentFitness += percentValue[j];
    }
    for (int i = 0; i < POP_SIZE; i++) {
      double daerahPersen = 0;
      double random = rand()%100;
      for (k = 0; k < POP_SIZE; k++){
        daerahPersen += percentValue[k];
        if (random <= daerahPersen) {
           break;
        }
      }
      for (int j = 0; j < SIZE; j++) individuBaru[i][j]=individu[k][j];
    }
    for (int i = 0; i < POP_SIZE; i++) {
      printf("Individu[%d]: ",(i+1));
      for (int j = 0; j < SIZE; j++) {
        individu[i][j]=individuBaru[i][j];
        printf("%d",individu[i][j]);
      }
      printf("\n");
    }
}
  // Cross Over
void crossOver() {
    for (int i = 0; i < POP_SIZE; i+=2) {
      int r = rand()%5;
      printf("random:%d\n",r);
      for (int j = r; j < SIZE; j++) {
        individuBaru[i][j]=individu[i+1][j];
        individuBaru[i+1][j]=individu[i][j];
      }
    }
    for (int i = 0; i < POP_SIZE; i++) {
      printf("Individu[%d]: ",(i+1));
      for (int j = 0; j < SIZE; j++) {
        individu[i][j]=individuBaru[i][j];
        printf("%d",individu[i][j]);
      }
      printf("\n");
    }
  }
  // Mutasi
void mutasi() {
    for (int i = 0; i < POP_SIZE; i+=2) {
      int r = rand()%5;
      printf("random:%d\n",r);
      if(individu[i][r]==0)
        individuBaru[i][r]=1;
      else
        individuBaru[i][r]=0;
    }
    for (int i = 0; i < POP_SIZE; i++) {
      printf("Individu[%d]: ",(i+1));
      for (int j = 0; j < SIZE; j++) {
        individu[i][j]=individuBaru[i][j];
        printf("%d",individu[i][j]);
      }
      printf("\n");
    }
  }

int _tmain(int argc, _TCHAR* argv[])
{
	int best;
	init_population();
    for(int iter=0;iter<100;iter++){
		best=fitness();
		if(best==5)break;
		rouletteSelection();
		crossOver();
		mutasi();
    }
	getch();
	return 0;
}

