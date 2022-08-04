#include "stdio.h"
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

//perseptron
double d_rand() {
	return(((float)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}

void main() {
	int i, j, k, l, out[10], ERR[10], jum;
	int x[10][8] = {
		//a,b,c,d,e,f,g,1
		 {1,1,1,1,1,1,0,1}, //0
		 {0,1,1,0,0,0,0,1}, //1
		 {1,1,0,1,1,0,1,1}, //2
		 {1,1,1,1,0,0,1,1}, //3
		 {0,1,1,0,0,1,1,1}, //4
		 {1,0,1,1,0,1,1,1}, //5
		 {1,0,1,1,1,1,1,1}, //6
		 {1,1,1,0,0,0,0,1}, //7
		 {1,1,1,1,1,1,1,1}, //8
		 {1,1,1,0,0,1,1,1}  //9
	};

	int T[10][10] = {
		{1,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,0,1,0,0,0,0,0,0,0},
		{0,0,0,1,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,1,0,0,0,0},
		{0,0,0,0,0,0,1,0,0,0},
		{0,0,0,0,0,0,0,1,0,0},
		{0,0,0,0,0,0,0,0,1,0},
		{0,0,0,0,0,0,0,0,0,1}
	};
	float w[10][8], O[10], LR = 0.1f, init = 0.15f, error;

	//Bobot
	for (j = 0; j < 10; j++) {
		for (i = 0; i < 8; i++) {
			w[j][i] = init * d_rand();
		}
	}

	//training
	for (l = 0; l < 100; l++) {
		error = 0.0;
		jum = 1;
		for (k = 0; k < 10; k++) {
			for (j = 0; j, 10; j++) {
				O[j] = 0.0;
				for (i = 0; i < 8; i++) {
					O[j] = O[j] + x[k][i] * w[j][i];

				}

				if (O[j] > 0.0) {
					out[j] = 1;
				}
				else
					out[j] = 0;
				ERR[j] = T[k][j] - out[j];
				error = error + abs(ERR[j]);
				jum++;

				if (ERR[j] != 0) {
					for (i = 0; i < 8; i++) {
						w[j][i] = w[j][i] + LR * x[k][i] * ERR[j];
					}
				}
			}
		}
		error = error / jum;
		cout << k << ":" << error << endl;

	}

	//running
	for (i = 0; i < 8; i++) {
		cout << "X" << i + 1 << ":";
		cin >> x[0][i];
	}

	for (j = 0; j < 10; j++) {
		O[j] = 0.0;
		for (i = 0; i < 8; i++) {
			O[j] = O[j] + x[0][i] * w[j][i];
		}
		if (O[j] > 0.0) {
			out[j] = 1;
		}
		else
			out[j] = 0;
		cout << O[j] << endl;
	}

	if ((out[0] == 1) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 0" << endl;
	if ((out[0] == 0) && (out[1] == 1) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 1" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 1) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 2" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 1) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 3" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 1) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 4" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 1) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 5" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 1) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 6" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 1) && (out[8] == 0) && (out[9] == 0))
		cout << "Output = 7" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 1) && (out[9] == 0))
		cout << "Output = 8" << endl;
	if ((out[0] == 1) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 1))
		cout << "Output = 9" << endl;
}