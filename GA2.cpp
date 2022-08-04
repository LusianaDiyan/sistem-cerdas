// GA2.cpp : Defines the entry point for the console application.
//
/*
#include "stdio.h"
#include <stdlib.h>
#include <conio.h>

int POP_SIZE=12;
int SIZE=6;

int individu[12][6];
int individuBaru[12][6];
int fitnessValue[6];
int totalFitness,bestFitness;
double percentValue[6];
int data[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int Target[6]={2,1,18,21,11,9};

void init_population(){
    for (int i = 0; i < POP_SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        int r = rand()%26+1;
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
        jum=jum+abs(Target[j]-individu[i][j]);
      }
      fitnessValue[i]=26*6-jum;
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
        printf("%d ",individu[i][j]);
	  }
	  printf(" == ");
	  for (int j = 0; j < SIZE; j++) {
    	printf("%c ",data[individu[i][j]-1]);
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
      percentValue[j] = fitnessValue[j] * 100.0 / totalFitness ;
      printf("Percent individu[%d]:%.2f\n",(j+1),percentValue[j]);
      totalPercentFitness += percentValue[j];
    }
	printf("totalPercentFitness:%.2f\n",totalPercentFitness);
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
        printf("%d ",individu[i][j]);
      }
      printf("\n");
    }
}
  // Cross Over
void crossOver() {
    for (int i = 0; i < POP_SIZE; i+=2) {
      int r = rand()%6;
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
        printf("%d ",individu[i][j]);
      }
      printf("\n");
    }
  }
  // Mutasi
void mutasi() {
    for (int i = 0; i < POP_SIZE; i+=2) {
      int r = rand()%6;
      printf("random:%d\n",r);
	  individuBaru[i][r]=26-individu[i][r];
    }
    for (int i = 0; i < POP_SIZE; i++) {
      printf("Individu[%d]: ",(i+1));
      for (int j = 0; j < SIZE; j++) {
        individu[i][j]=individuBaru[i][j];
        printf("%d ",individu[i][j]);
      }
      printf("\n");
    }
  }

int main()
{
	int best;
	init_population();
	for(int iter=0;iter<1;iter++){
		best=fitness();
		if(best==156)break;
		rouletteSelection();
		crossOver();
		mutasi();
    }
	
	return 0;
}
*/