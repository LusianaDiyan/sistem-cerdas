#include "stdio.h"
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

//mcPith
//and 2 input

/*int main() {
	int x1, x2, w1 = 1, w2 = 1, th = 2, y, out;
	printf("Operasi AND 2 Input\n");
	printf("X1= ");
	scanf_s("%d", &x1);
	printf("X2= ");
	scanf_s("%d", &x2);
	y = x1 * w1 + x2 * w2;
	if (y >= th)
		out = 1;
	else
		out = 0;
	printf("Hasil=%d\n", out);
	system("pause");
}*/

//or 2 input

/*int main() {
	 	int x1, x2, w1 = 2, w2 = 2, th = 2, y, out;
		printf("Operasi OR 2 Input\n");
	 	printf("X1=");
	 	scanf_s("%d", &x1);
	 	printf("X2=");
	 	scanf_s("%d", &x2);
	 	y = x1 * w1 + x2 * w2;
	 	if (y >= th)
	 		out = 1;
	 	else
	 		out = 0;
	 	printf("Hasil=%d\n", out);
		system("pause");
}*/

//xor 2 input

/*int main() {
	 	int x1, x2, w1 = 2, w2 = -1, w3 = -1, w4 = 2, w5 = 2, w6 = 2, out1, out2, out3, th = 2, z1, z2, y, out;
		printf("OPERASI XOR 2 INPUT\n");
		printf("X1=");
	 	scanf_s("%d", &x1);
	 	printf("X2=");
	 	scanf_s("%d", &x2);
	 	z1 = x1 * w1 + x2 * w2;
	 	if (z1 >= th)
	 		out1 = 1;
	 	else
	 		out1 = 0;
	 	printf("\nOut1=%d\n", out1);
	 	z2 = x1 * w3 + x2 * w4;
	 	if (z2 >= th)
	 		out2 = 1;
	 	else
	 		out2 = 0;
	 	printf("Out2=%d\n", out2);
	 	y = out1 * w5 + out2 * w6;
	 	if (y >= th)
	 		out3 = 1;
	 	else
	 		out3 = 0;
	 	printf("Hasil=%d\n", out3);
		system("pause");
}*/

/*
double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}

void main() {
	int i, j, out, ERR, y;
	float w[3], O, LR = 0.1, init = 0.15;
	int x[3][4] = {
		{0,0,1,1},
		{0,1,0,1},
		{1,1,1,1}
	};
	int T[4] = { 0,0,0,1 };
	//inisialisasi bobot
	for (i = 0; i < 3; i++) {
		w[i] = init * d_rand();
		printf("%f\n", w[i]);
	}
	//traning
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			O = x[0][j] * w[0] + x[1][j] * w[1] + x[2][j] * w[2];
			if (O > 0.0)
				out = 1;
			else
				out = 0;
			ERR = T[j] - out;
			if (ERR != 0) {
				w[0] = w[0] + LR * x[0][j] * ERR;
				w[1] = w[1] + LR * x[1][j] * ERR;
				w[2] = w[2] + LR * x[2][j] * ERR;
			}
		}
		printf("Err:%d\n", ERR);
	}
	//running
	for (i = 0; i < 4; i++) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		O = x[0][0] * w[0] + x[1][0] * w[1] + x[2][0] * w[2];
		if (O > 0.0)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
		system("pause");
	}
}*/

//and 3 input

/*void main() {
	int w1 = 1, w2 = 1, w3 = 1, t = 3;
	int x1, x2, x3, y, out;
	printf("Operasi AND 3 Input\n");
	printf("Input x1 =");
	scanf_s("%d", &x1);
	printf("Input x2 =");
	scanf_s("%d", &x2);
	printf("Input x3 =");
	scanf_s("%d", &x3);

	y = (w1*x1) + (w2*x2) + (w3*x3);
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n", out);
	system("pause");
}*/

//or 3 input

/*void main() {
	int w1 = 2, w2 = 2, w3 = 2, t = 1;
	int x1, x2, x3, y, out;
	printf("Operasi OR 3 Input\n");
	printf("Input x1 =");
	scanf_s("%d", &x1);
	printf("Input x2 =");
	scanf_s("%d", &x2);
	printf("Input x3 =");
	scanf_s("%d", &x3);

	y = (w1*x1) + (w2*x2) + (w3*x3);
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n", out);
	system("pause");
}*/

//xor 3 input

/*void main()
{
	int x1, x2, x3;
	int i, y, z, y1, y2, y3, ya, yb, yc, yd, y4;
	for (i = 0; i < 8; i++)
	{
		printf("Operasi XOR 3 Input\n");
		printf("Input X1:");
		scanf_s("%d", &x1);
		printf("Input X2:");
		scanf_s("%d", &x2);
		printf("Input X3:");
		scanf_s("%d", &x3);
		y1 = x1 * 2 + x2 * (-1) + x3 * (-1);
		if (y1 >= 2)
			ya = 1;
		else
			ya = 0;
		y2 = x1 * (-1) + x2 * 2 + x3 * (-1);
		if (y2 >= 2)
			yb = 1;
		else
			yb = 0;
		y3 = x1 * (-1) + x2 * (-1) + x3 * 2;
		if (y3 >= 2)
			yc = 1;
		else
			yc = 0;
		y4 = x1 * 1 + x2 * 1 + x3 * 1;
		if (y4 >= 3)
			yd = 1;
		else
			yd = 0;
		z = ya * 2 + yb * 2 + yc * 2 + yd * 2;
		if (z >= 2)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
		system("pause");
	}
}*/

//perceptron AND
/*double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}

void main() {
	int i, j, out, ERR, y;
	float w[3], O, LR = 0.1, init = 0.15;
	int x[3][4] = {
		{ 0, 0, 1, 1 },
		{ 0, 1, 0, 1 },
		{ 1, 1, 1, 1 }
	};
	int T[4] = { 0, 0, 0, 1 };
	//inisialisasi bobot
	for (i = 0; i < 3; i++) {
		w[i] = init * d_rand();
		printf("%f\n", w[i]);
	}
	//traning
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			O = x[0][j] * w[0] + x[1][j] * w[1] + x[2][j] * w[2];
			if (O > 0.0)
				out = 1;
			else
				out = 0;
			ERR = T[j] - out;
			if (ERR != 0) {
				w[0] = w[0] + LR * x[0][j] * ERR;
				w[1] = w[1] + LR * x[1][j] * ERR;
				w[2] = w[2] + LR * x[2][j] * ERR;
			}
		}
		printf("Err:%d\n", ERR);
	}
	//running
	for (i = 0; i < 4; i++) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		O = x[0][0] * w[0] + x[1][0] * w[1] + x[2][0] * w[2];
		if (O > 0.0)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
	}
	system("pause");
}*/

//OR Perceptron
/*double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}
void main()
{
	int i, j, out, ERR, y;
	int x[3][4] = {
		{ 0, 0, 1, 1 },
		{ 0, 1, 0, 1 },
		{ 1, 1, 1, 1 }
	};
	int T[4] = { 0, 1, 1, 1 };
	float w[3], O, LR = 0.1, init = 0.15;
	//inisialisasi bobot
	for (i = 0; i < 3; i++) {
		w[i] = init * d_rand();
	}
	//traning
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			O = x[0][j] * w[0] + x[1][j] * w[1] + x[2][j] * w[2];
			if (O > 0.0)
				out = 1;
			else
				out = 0;
			ERR = T[j] - out;
			if (ERR != 0) {
				w[0] = w[0] + LR * x[0][j] * ERR;
				w[1] = w[1] + LR * x[1][j] * ERR;
				w[2] = w[2] + LR * x[2][j] * ERR;
			}
		}
		printf("Err:%d\n", ERR);
	}
	//running
	for (i = 0; i < 4; i++) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		O = x[0][0] * w[0] + x[1][0] * w[1] + x[2][0] * w[2];
		if (O > 0.0)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
	}
}*/

//XOR Perceptron
/*void main()
{
	int x1, x2, x3;
	int i, y, z, y1, y2, y3, ya, yb, yc, yd, y4;
	for (i = 0; i < 8; i++)
	{
		printf("Operasi XOR\n");
		printf("Input X1:");
		scanf_s("%d", &x1);
		printf("Input X2:");
		scanf_s("%d", &x2);
		printf("Input X3:");
		scanf_s("%d", &x3);
		y1 = x1 * 2 + x2 * (-1) + x3 * (-1);
		if (y1 >= 2)
			ya = 1;
		else
			ya = 0;
		y2 = x1 * (-1) + x2 * 2 + x3 * (-1);
		if (y2 >= 2)
			yb = 1;
		else
			yb = 0;
		y3 = x1 * (-1) + x2 * (-1) + x3 * 2;
		if (y3 >= 2)
			yc = 1;
		else
			yc = 0;
		y4 = x1 * 1 + x2 * 1 + x3 * 1;
		if (y4 >= 3)
			yd = 1;
		else
			yd = 0;
		z = ya * 2 + yb * 2 + yc * 2 + yd * 2;
		if (z >= 2)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n\n", y);
	}
}*/

//perceptron 7segment

/*double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}

void main()
{
	char ch;
	int i, j, p, l, out[10], ERR[10], jum;
	int x[10][8] =
	{      //a b c d e f g 1 
		{1,1,1,1,1,1,0,1},//0
		{0,1,1,0,0,0,0,1},//1
		{1,1,0,1,1,0,1,1},//2
		{1,1,1,1,0,0,1,1},//3
		{0,1,1,0,0,1,1,1},//4
		{1,0,1,1,0,1,1,1},//5
		{0,0,1,1,1,1,1,1},//6
		{1,1,1,0,0,0,0,1},//7
		{1,1,1,1,1,1,1,1},//8
		{1,1,1,0,0,1,1,1} //9
	};
	int T[10][10] =
	{
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
	//inisialisasi bobot
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 8; i++)
		{
			w[j][i] = init * d_rand();
			printf("%.2f ", w[j][i]);
		}
		printf("\n");
	}
	//traning
	for (l = 0; l < 10000; l++)
	{
		error = 0.0f; jum = 1;
		for (p = 0; p < 10; p++)
		{
			for (j = 0; j < 10; j++)
			{
				O[j] = 0.0;
				for (i = 0; i < 8; i++)
				{
					O[j] = O[j] + x[p][i] * w[j][i];
					if (O[j] > 0.0)
						out[j] = 1;
					else
						out[j] = 0;
				}
				ERR[j] = T[p][j] - out[j];
				error = error + ERR[j];
				jum++;
				if (ERR[j] != 0)
				{
					for (i = 0; i < 8; i++)
					{
						w[j][i] = w[j][i] + LR * x[p][i] * ERR[j];
					}
				}
			}
		}
		error = error / jum;
		printf("error=%.2f\n", error);
	}
	for (;;) {
		//running
		for (i = 0; i < 7; i++)
		{
			printf("Input X[%d]:", i);
			scanf_s("%d", &x[0][i]);
		}
		for (j = 0; j < 10; j++)
		{
			O[j] = 0.0;
			for (i = 0; i < 8; i++)
			{
				O[j] = O[j] + x[0][i] * w[j][i];
				if (O[j] > 0.0)
					out[j] = 1;
				else
					out[j] = 0;
			}
		}
		if ((out[0] == 1) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 0\n");
		if ((out[0] == 0) && (out[1] == 1) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 1\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 1) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 2\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 1) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 3\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 1) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 4\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 1) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 5\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 1) && (out[7] == 0) && (out[8] == 0) && (out[9] == 0))printf("Output: 6\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 1) && (out[8] == 0) && (out[9] == 0))printf("Output: 7\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 1) && (out[9] == 0))printf("Output: 8\n");
		if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) && (out[8] == 0) && (out[9] == 1))printf("Output: 9\n");
		ch = _getch();
		if (ch == 'e')break;
	}
	_getch();
}*/

//multiperceptron

/*--------------------- random function -----------------------*/
/*float  d_rand(void) {
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}*/
/*-------------------------- sigmoid ------------------------------*/
/*float  sigmoid(float u) {
	return ((float)(1.0 / (1.0 + exp(-u))));
}
int  main() {
	int i, j, k, p, l;
	float z, delta_o, delta_h[2], g1, f1[2];
	float y[3] = { 0.0,0.0,1.0 };
	int x[3][4] = { {0,0,1,1},
			{0,1,0,1},
			{1,1,1,1} };
	float t[4] = { 0,1,1,0 };
	float w[2][3], O[2], s[3], LR = 0.1f, init = 0.15f, error;

	//inisialisasi bobot
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 3; i++) {
			w[j][i] = init * d_rand();
		}
	}
	for (j = 0; j < 3; j++) {
		s[j] = init * d_rand();
	}
	//training
	for (l = 0; l < 15000; l++) {
		error = 0.0;
		for (p = 0; p < 4; p++) {
			for (j = 0; j < 2; j++) {
				O[j] = 0.0;
				for (i = 0; i < 3; i++) {
					O[j] = O[j] + x[i][p] * w[j][i];
				}
				y[j] = sigmoid(O[j]);
			}
			O[0] = 0.0;
			for (i = 0; i < 3; i++) {
				O[0] = O[0] + y[i] * s[i];
			}
			z = sigmoid(O[0]);
			g1 = z * (1 - z);
			delta_o = (t[p] - z) * g1;
			for (j = 0; j < 2; j++) {
				f1[j] = y[j] * (1 - y[j]);
			}
			for (j = 0; j < 2; j++) {
				delta_h[j] = f1[j] * delta_o * s[j];
			}
			for (i = 0; i < 3; i++) {
				s[i] = s[i] + LR * delta_o * y[i];
			}
			for (j = 0; j < 2; j++) {
				for (i = 0; i < 3; i++) {
					w[j][i] = w[j][i] + LR * delta_h[j] * x[i][p];
				}
			}
			error = error + ((t[p] - z) * (t[p] - z)) / 2;
		}
		error = error / 4;
		printf("Iterasi: %d Error: %f\n", l, error);
		if (error < 0.01)break;
	}
	//running
	char ch;
	for (;;) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		for (j = 0; j < 2; j++) {
			O[j] = 0.0;
			for (i = 0; i < 3; i++) {
				O[j] = O[j] + x[i][0] * w[j][i];
			}
			y[j] = sigmoid(O[j]);
		}
		O[0] = 0.0;
		for (i = 0; i < 3; i++) {
			O[0] = O[0] + y[i] * s[i];
		}
		z = sigmoid(O[0]);
		printf("z: %f\n", z);
		if (z < 0.5)
			printf("output:0\n");
		else
			printf("output:1\n");
		ch = _getch();
		if (ch == 'e')break;
	}
}*/

//kohenen

/*void main() {
	float w[2][4] = { {0.2,0.6,0.5,0.9},
					 {0.8,0.4,0.7,0.3} };
	int x[6][2] = { 
		{0.10, 0.10},
		{0.20, 0.20},
		{0.30, 0.10},
		{0.50, 0.30},
		{0.40, 0.40},
		{0.20, 0.40} };
	float D[2];
	int i, j, k, l;
	float LR = 0.6;
	//training
	for (l = 0; l < 100; l++) {
		for (k = 0; k < 4; k++) {
			for (j = 0; j < 2; j++) {
				D[j] = 0.0;
				for (i = 0; i < 4; i++) {
					D[j] = D[j] + (w[j][i] - x[k][i]) * (w[j][i] - x[k][i]);
				}
			}
			if (D[0] < D[1]) {
				for (i = 0; i < 4; i++) {
					w[0][i] = w[0][i] + LR * (x[k][i] - w[0][i]);
				}
			}
			else {
				for (i = 0; i < 4; i++) {
					w[1][i] = w[1][i] + LR * (x[k][i] - w[1][i]);
				}
			}
		}
		LR = 0.5 * LR;
	}
	//mapping cluster 
	x[0][0] = 1; x[0][1] = 1; x[0][2] = 0; x[0][3] = 0;
	for (j = 0; j < 2; j++) {
		D[j] = 0.0;
		for (i = 0; i < 4; i++) {
			D[j] = D[j] + sqrt((w[j][i] - x[0][i]) * (w[j][i] - x[0][i]));
		}
		printf("D(%d) = %.2f\n", (j + 1), D[j]);
	}
	if (D[0] < D[1]) {
		printf("Cluster 1\n");
	}
	else {
		printf("Cluster 2\n");
	}
	system("pause");
}*/

//tugas
/*void main() {
	float w[2][2] = { {0.5,0.5},
					 {0.5,0.5} };
	float x[6][2] = { {0.1,0.1},
				   {0.2,0.2},
				   {0.3,0.1},
				   {0.5,0.3},
				   {0.4,0.4},
				   {0.2,0.4},
	};
	float D[2];
	int i, j, k, l;
	float LR = 0.6;
	//training
	for (l = 0; l < 10; l++) {
		for (k = 0; k < 6; k++) {
			for (j = 0; j < 2; j++) {
				D[j] = 0.0;
				for (i = 0; i < 2; i++) {
					D[j] = D[j] + (w[j][i] - x[k][i]) * (w[j][i] - x[k][i]);
				}
			}
			if (D[0] < D[1]) {
				for (i = 0; i < 2; i++) {
					w[0][i] = w[0][i] + LR * (x[k][i] - w[0][i]);
				}
			}
			else {
				for (i = 0; i < 2; i++) {
					w[1][i] = w[1][i] + LR * (x[k][i] - w[1][i]);
				}
			}
		}
		LR = 0.5 * LR;
	}
	//mapping cluster 
	x[0][0] = 1; x[0][1] = 1;
	for (j = 0; j < 2; j++) { // bobot baris 
		D[j] = 0.0;
		for (i = 0; i < 2; i++) { //bobot kolom
			D[j] = D[j] + sqrt((w[j][i] - x[0][i]) * (w[j][i] - x[0][i]));
		}
		printf("D(%d) = %.2f\n", (j + 1), D[j]);
	}
	if (D[0] < D[1]) {
		printf("Cluster 1");
	}
	else {
		printf("Cluster 2");
	}
	system("pause");
}*/

//backpropagation (ujian kelulusan)

/*--------------------- random function -----------------------*/
/*float  d_rand(void)
{
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}*/

/*-------------------------- sigmoid ------------------------------*/
/*float  sigmoid(float u)
{
	return ((float)(1.0 / (1.0 + exp(-u))));
}
void main()
{
	int i, j, p, l;
	float z, delta_o, delta_h[6], g1, f1[6];
	float y[6] = { 0.0,0.0,1.0,0.0,0.0,0.0 };
	float x[11][4] = { {1.00,1.00,1.00,1.00},
	   {1.00,0.50,1.00,1.00},
	   {1.00,0.50,0.00,1.00},
	   {1.00,0.00,0.00,1.00},
		{0.50,1.00,1.00,1.00},
	   {0.50,0.50,1.00,1.00},
	   {0.50,0.50,0.00,1.00},
	   {0.50,0.00,0.00,1.00},
	   {0.00,1.00,1.00,1.00},
	   {0.00,0.50,0.00,1.00},
	   {0.00,0.00,1.00,1.00} };
	float t[11] = { 1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0 };
	float w[6][4], O[6], s[6], LR = 0.1f, init = 0.15f, error;
	FILE* f;
	//inisialisasi bobot
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 4; i++)
		{
			w[j][i] = init * d_rand();
		}
	}
	for (j = 0; j < 3; j++)
	{
		s[j] = init * d_rand();
	}
	//training
	for (l = 0; l < 5000; l++)
	{
		error = 0.0;
		for (p = 0; p < 11; p++)
		{
			for (j = 0; j < 2; j++)
			{
				O[j] = 0.0;
				for (i = 0; i < 4; i++)
				{
					O[j] = O[j] + x[p][i] * w[j][i];
				}
				y[j] = sigmoid(O[j]);
			}
			O[0] = 0.0;
			for (i = 0; i < 3; i++)
			{
				O[0] = O[0] + y[i] * s[i];
			}
			z = sigmoid(O[0]);
			g1 = z * (1 - z);
			delta_o = (t[p] - z) * g1;
			for (j = 0; j < 2; j++)
			{
				f1[j] = y[j] * (1 - y[j]);
			}
			for (j = 0; j < 2; j++)
			{
				delta_h[j] = f1[j] * delta_o * s[j];
			}
			for (i = 0; i < 3; i++)
			{
				s[i] = s[i] + LR * delta_o * y[i];
			}
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 4; i++)
				{
					w[j][i] = w[j][i] + LR * delta_h[j] * x[p][i];
				}
			}
			error = error + ((t[p] - z) * (t[p] - z)) / 2;
		}
		error = error / 11;
		printf("Iterasi: %d Error: %f\n", l, error);
		if (error < 0.00001)break;
	}
	//running
	int x1, x2, x3;
	printf("X1=");
	scanf_s("%d", &x1);
	if (x1 == 3)x[0][0] = 1;
	if (x1 == 2)x[0][0] = 0.50;
	if (x1 == 1)x[0][0] = 0.00;
	printf("X2=");
	scanf_s("%d", &x2);
	if (x2 == 3)x[0][1] = 1;
	if (x2 == 2)x[0][1] = 0.50;
	if (x2 == 1)x[0][1] = 0.00;
	printf("X3=");
	scanf_s("%d", &x3);
	if (x3 == 2)x[0][2] = 1.00;
	if (x3 == 1)x[0][2] = 0.00;

	//x[0][0] = 1;
	//x[0][1] = 0.67;
	//x[0][2] = 0.67;
	printf("IPK: %.2f\n", x[0][0]);
	printf("Psikologi: %.2f\n", x[0][1]);
	printf("Wawancara: %.2f\n", x[0][2]);
	for (j = 0; j < 2; j++)
	{
		O[j] = 0.0;
		for (i = 0; i < 4; i++)
		{
			O[j] = O[j] + x[0][i] * w[j][i];
		}
		y[j] = sigmoid(O[j]);
	}
	O[0] = 0.0;
	for (i = 0; i < 3; i++)
	{
		O[0] = O[0] + y[i] * s[i];
	}
	z = sigmoid(O[0]);
	printf("Output:%.2f\n", z);
	if (z < 0.5)
		printf("Keputusan: TIDAK LULUS\n");
	else
		printf("Keputusan: LULUS\n");
	system("pause");
}*/

//Fuzzy Logic
/*float MFx(float a, float b, float z) {
	float hasil_MFx;
	if ((z >= a) && (z < b))hasil_MFx = (b - z) / (b - a);
	if (z <= a) hasil_MFx = 1;
	if (z >= b) hasil_MFx = 0;
	return hasil_MFx;
}
float MFy(float a, float b, float z) {
	float hasil_MFy;
	if ((z >= a) && (z < b))hasil_MFy = (z - a) / (b - a);
	if (z <= a) hasil_MFy = 0;
	if (z >= b) hasil_MFy = 1;
	return hasil_MFy;
}
float Min(float a, float b) {
	float hasil_min;
	if (a < b)
		hasil_min = a;
	else
		hasil_min = b;
	return hasil_min;
}
void main() {
	float u1x, u2x, u3x, u1y, u2y, u3y;
	float minR1, minR2, minR3, minR4;
	float proR1, proR2, proR3, proR4;
	//Fuzzyfication
	float permintaan = 4000;
	float persediaan = 300;
	printf("Persoalan:\n");
	printf("Permintaan:%.0f\n", permintaan);
	printf("Persediaan:%.0f\n", persediaan);
	printf("Berapa jumlah produksi?\n");

	u1x = MFx(1000, 5000, permintaan);//permintaan turun
	printf("Fungsi keanggotaan permintaan turun:%.2f\n", u1x);
	u1y = MFy(1000, 5000, permintaan);//permintaan naik
	printf("Fungsi keanggotaan permintaan naik:%.2f\n", u1y);

	u2x = MFx(100, 600, persediaan);//persediaan sedikit
	printf("Fungsi keanggotaan persediaan sedikit:%.2f\n", u2x);
	u2y = MFy(100, 600, persediaan);//persediaan banyak
	printf("Fungsi keanggotaan persediaan banyak:%.2f\n", u2y);
	//rule 1 : IF Permintaan TURUN And Persediaan BANYAK THEN Produksi Barang BERKURANG
	minR1 = Min(u1x, u2y);
	printf("Minimum Permintaan TURUN And Persediaan BANYAK:%.2f\n", minR1);
	proR1 = 7000 - minR1 * 5000;
	printf("Produksi berkurang:%.0f\n", proR1);
	//rule 2 : IF Permintaan TURUN And Persediaan SEDIKIT THEN Produksi Barang BERKURANG
	minR2 = Min(u1x, u2x);
	printf("Minimum Permintaan TURUN And Persediaan SEDIKIT:%.2f\n", minR2);
	proR2 = 7000 - minR2 * 5000;
	printf("Produksi berkurang:%.0f\n", proR2);
	//rule 3 : IF Permintaan NAIK And Persediaan BANYAK THEN Produksi Barang BERTAMBAH
	minR3 = Min(u1y, u2y);
	printf("Minimum Permintaan NAIK And Persediaan BANYAK:%.2f\n", minR3);
	proR3 = 2000 + minR3 * 5000;
	printf("Produksi bertambah:%.0f\n", proR3);
	//rule 4 : IF Permintaan NAIK And Persediaan SEDIKIT THEN Produksi Barang BERTAMBAH
	minR4 = Min(u1y, u2x);
	printf("Minimum Permintaan NAIK And Persediaan SEDIKIT:%.2f\n", minR4);
	proR4 = 2000 + minR4 * 5000;
	printf("Produksi bertambah:%.0f\n", proR4);
	//Defuzzyfikasi
	float pembilang = minR1 * proR1 + minR2 * proR2 + minR3 * proR3 + minR4 * proR4;
	float penyebut = minR1 + minR2 + minR3 + minR4;
	float hasil_COA = pembilang / penyebut;
	printf("Produksi:%.0f\n", hasil_COA);
	system("pause");
}*/

//Genetika Algoritma

//GA1
/*int POP_SIZE = 4;
int SIZE = 5;

int individu[4][5];
int individuBaru[4][5];
int fitnessValue[5];
int totalFitness, bestFitness;
double percentValue[4];

void init_population() {
	for (int i = 0; i < POP_SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			int r = rand() % 2;
			individu[i][j] = r;
		}
	}
}
int fitness() {
	int jum;
	totalFitness = 0;
	for (int i = 0; i < POP_SIZE; i++) {
		jum = 0;
		for (int j = 0; j < SIZE; j++) {
			jum = jum + individu[i][j];
		}
		fitnessValue[i] = jum;
		totalFitness = totalFitness + jum;
	}
	int max = 0;
	for (int i = 0; i < POP_SIZE; i++) {
		if (max < fitnessValue[i])max = fitnessValue[i];
	}
	bestFitness = max;
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			printf("%d", individu[i][j]);
		}
		printf(" NF:%d\n", fitnessValue[i]);
	}
	printf("Total Fitness:%d \nBest Fitness:%d\n", totalFitness, bestFitness);
	return bestFitness;
}
//Selection
void rouletteSelection() {
	double totalPercentFitness = 0.0;
	int k;
	for (int j = 0; j < POP_SIZE; j++) {
		percentValue[j] = (fitnessValue[j] * 100.0) / totalFitness;
		printf("Percent individu[%d]:%.2f\n", (j + 1), percentValue[j]);
		totalPercentFitness += percentValue[j];
	}
	for (int i = 0; i < POP_SIZE; i++) {
		double daerahPersen = 0;
		double random = rand() % 100;
		for (k = 0; k < POP_SIZE; k++) {
			daerahPersen += percentValue[k];
			if (random <= daerahPersen) {
				break;
			}
		}
		for (int j = 0; j < SIZE; j++) individuBaru[i][j] = individu[k][j];
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d", individu[i][j]);
		}
		printf("\n");
	}
}
// Cross Over
void crossOver() {
	for (int i = 0; i < POP_SIZE; i += 2) {
		int r = rand() % 5;
		printf("random:%d\n", r);
		for (int j = r; j < SIZE; j++) {
			individuBaru[i][j] = individu[i + 1][j];
			individuBaru[i + 1][j] = individu[i][j];
		}
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d", individu[i][j]);
		}
		printf("\n");
	}
}
// Mutasi
void mutasi() {
	for (int i = 0; i < POP_SIZE; i += 2) {
		int r = rand() % 5;
		printf("random:%d\n", r);
		if (individu[i][r] == 0)
			individuBaru[i][r] = 1;
		else
			individuBaru[i][r] = 0;
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d", individu[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int best;
	init_population();
	for (int iter = 0; iter < 100; iter++) {
		best = fitness();
		if (best == 5)break;
		rouletteSelection();
		crossOver();
		mutasi();
	}
	system("pause");
}*/

//GA2
/*int POP_SIZE = 12;
int SIZE = 6;

int individu[12][6];
int individuBaru[12][6];
int fitnessValue[6];
int totalFitness, bestFitness;
double percentValue[6];
int data1[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
int Target[6] = { 2,1,18,21,11,9 };

void init_population() {
	for (int i = 0; i < POP_SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			int r = rand() % 26 + 1;
			individu[i][j] = r;
		}
	}
}
int fitness() {
	int jum;
	totalFitness = 0;
	for (int i = 0; i < POP_SIZE; i++) {
		jum = 0;
		for (int j = 0; j < SIZE; j++) {
			jum = jum + abs(Target[j] - individu[i][j]);
		}
		fitnessValue[i] = 26 * 6 - jum;
		totalFitness = totalFitness + jum;
	}
	int max = 0;
	for (int i = 0; i < POP_SIZE; i++) {
		if (max < fitnessValue[i])max = fitnessValue[i];
	}
	bestFitness = max;
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			printf("%d ", individu[i][j]);
		}
		printf(" == ");
		for (int j = 0; j < SIZE; j++) {
			printf("%c ", data1[individu[i][j] - 1]);
		}
		printf(" NF:%d\n", fitnessValue[i]);
	}
	printf("Total Fitness:%d \nBest Fitness:%d\n", totalFitness, bestFitness);
	return bestFitness;
}
//Selection
void rouletteSelection() {
	double totalPercentFitness = 0.0;
	int k;
	for (int j = 0; j < POP_SIZE; j++) {
		percentValue[j] = fitnessValue[j] * 100.0 / totalFitness;
		printf("Percent individu[%d]:%.2f\n", (j + 1), percentValue[j]);
		totalPercentFitness += percentValue[j];
	}
	printf("totalPercentFitness:%.2f\n", totalPercentFitness);
	for (int i = 0; i < POP_SIZE; i++) {
		double daerahPersen = 0;
		double random = rand() % 100;
		for (k = 0; k < POP_SIZE; k++) {
			daerahPersen += percentValue[k];
			if (random <= daerahPersen) {
				break;
			}
		}
		for (int j = 0; j < SIZE; j++) individuBaru[i][j] = individu[k][j];
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d ", individu[i][j]);
		}
		printf("\n");
	}
}
// Cross Over
void crossOver() {
	for (int i = 0; i < POP_SIZE; i += 2) {
		int r = rand() % 6;
		printf("random:%d\n", r);
		for (int j = r; j < SIZE; j++) {
			individuBaru[i][j] = individu[i + 1][j];
			individuBaru[i + 1][j] = individu[i][j];
		}
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d ", individu[i][j]);
		}
		printf("\n");
	}
}
// Mutasi
void mutasi() {
	for (int i = 0; i < POP_SIZE; i += 2) {
		int r = rand() % 6;
		printf("random:%d\n", r);
		individuBaru[i][r] = 26 - individu[i][r];
	}
	for (int i = 0; i < POP_SIZE; i++) {
		printf("Individu[%d]: ", (i + 1));
		for (int j = 0; j < SIZE; j++) {
			individu[i][j] = individuBaru[i][j];
			printf("%d ", individu[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int best;
	init_population();
	for (int iter = 0; iter < 1; iter++) {
		best = fitness();
		if (best == 156)break;
		rouletteSelection();
		crossOver();
		mutasi();
	}
	system("pause");
}*/

//LVQ
//exp
/*void main() {
	int i, j, k, epoh = 0, maxIter = 10;
	float x[10][6] = {
	{1,0,0,0,1,0},
	{0,1,1,1,1,0},
	{0,0,1,0,0,1},
	{0,0,1,0,1,0},
	{0,1,0,0,0,1},
	{1,0,1,0,1,1},
	{0,0,1,1,0,0},
	{0,1,0,1,0,0},
	{1,0,0,1,0,1},
	{0,1,1,1,1,1} };
	int T[10] = { 1,2,1,1,1,1,2,2,2,2 };
	float w[2][6], jarak[2], alpha = 0.05f;
	
	//inisialisasi bobot
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (i = 0; i < 6; i++) {
		w[0][i] = x[0][i];
		w[1][i] = x[1][i];
	}

	//traning
	for (i = 0; i < 10; i++) {
		for (j = 2; j < 10; j++) {
			jarak[0] = 0.0;
			jarak[1] = 0.0;
			for (k = 0; k < 6; k++) {
				jarak[0] = jarak[0] + (x[j][k] - w[0][k])*(x[j][k] - w[0][k]);
				jarak[1] = jarak[1] + (x[j][k] - w[1][k])*(x[j][k] - w[1][k]);
			}
			jarak[0] = sqrt(jarak[0]);
			jarak[1] = sqrt(jarak[1]);
			printf("jarak[0]:%f\n", jarak[0]);
			printf("jarak[1]:%f\n", jarak[1]);

			if (jarak[0] <= jarak[1]) {
				printf("jarak[0]\n");
				if (T[j] == 1) {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] + alpha * (x[j][k] - w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] - alpha * (x[j][k] - w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
			}
			else {
				printf("jarak[1]\n");
				if (T[j] == 2) {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] + alpha * (x[j][k] - w[1][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] - alpha * (x[j][k] - w[0][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
			}
		}
		alpha = alpha - 0.1*alpha;
		epoh++;
		printf("Epoh:%d\n", epoh);
	}
	
	//running
	x[0][0] = 0; x[0][1] = 1; x[0][2] = 0; x[0][3] = 1; x[0][4] = 1; x[0][5] = 0;
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (k = 0; k < 6; k++) {
		jarak[0] = jarak[0] + (x[0][k] - w[0][k])*(x[0][k] - w[0][k]);
		jarak[1] = jarak[1] + (x[0][k] - w[1][k])*(x[0][k] - w[1][k]);
	}
	jarak[0] = sqrt(jarak[0]);
	jarak[1] = sqrt(jarak[1]);
	printf("jarak[0]:%f\n", jarak[0]);
	printf("jarak[1]:%f\n", jarak[1]);
	if (jarak[0] <= jarak[1]) {
		printf("Kelas 1\n");
	}
	else {
		printf("Kelas 2\n");
	}
	system("pause");
}*/

//tugas
/*void main() {
	int i, j, k, epoh = 0, maxIter = 10;
	float x[10][6] = {
	{1,0,0,0,1,0},
	{0,1,1,1,1,0},
	{0,0,1,0,0,1},
	{0,0,1,0,1,0},
	{0,1,0,0,0,1},
	{1,0,1,0,1,1},
	{0,0,1,1,0,0},
	{0,1,0,1,0,0},
	{1,0,0,1,0,1},
	{0,1,1,1,1,1} };
	int T[10] = { 1,1,1,1,1,2,2,2,2,2,3,3,3,3,3 };
	float w[2][6], jarak[2], alpha = 0.05f;

	//inisialisasi bobot
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (i = 0; i < 6; i++) {
		w[0][i] = x[0][i];
		w[1][i] = x[1][i];
	}

	//traning
	for (i = 0; i < 10; i++) {
		for (j = 2; j < 10; j++) {
			jarak[0] = 0.0;
			jarak[1] = 0.0;
			for (k = 0; k < 6; k++) {
				jarak[0] = jarak[0] + (x[j][k] - w[0][k])*(x[j][k] - w[0][k]);
				jarak[1] = jarak[1] + (x[j][k] - w[1][k])*(x[j][k] - w[1][k]);
			}
			jarak[0] = sqrt(jarak[0]);
			jarak[1] = sqrt(jarak[1]);
			printf("jarak[0]:%f\n", jarak[0]);
			printf("jarak[1]:%f\n", jarak[1]);

			if (jarak[0] <= jarak[1]) {
				printf("jarak[0]\n");
				if (T[j] == 1) {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] + alpha * (x[j][k] - w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] - alpha * (x[j][k] - w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
			}
			else {
				printf("jarak[1]\n");
				if (T[j] == 2) {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] + alpha * (x[j][k] - w[1][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] - alpha * (x[j][k] - w[0][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
			}
		}
		alpha = alpha - 0.1*alpha;
		epoh++;
		printf("Epoh:%d\n", epoh);
	}

	//running
	x[0][0] = 0; x[0][1] = 1; x[0][2] = 0; x[0][3] = 1; x[0][4] = 1; x[0][5] = 0;
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (k = 0; k < 6; k++) {
		jarak[0] = jarak[0] + (x[0][k] - w[0][k])*(x[0][k] - w[0][k]);
		jarak[1] = jarak[1] + (x[0][k] - w[1][k])*(x[0][k] - w[1][k]);
	}
	jarak[0] = sqrt(jarak[0]);
	jarak[1] = sqrt(jarak[1]);
	printf("jarak[0]:%f\n", jarak[0]);
	printf("jarak[1]:%f\n", jarak[1]);
	if (jarak[0] <= jarak[1]) {
		printf("Kelas 1\n");
	}
	else {
		printf("Kelas 2\n");
	}
	system("pause");
}*/

//LMS
/*#define mu 0.2f
#define M 5
#define I 1000

double Input[I] = { 0.0 };
double Desired[I] = { 0.0 };
//double H[M] = { 1, 0.5, 0.25, 0.125, 0.0625 };
double H[M] = { 0.0625, 0.125, 0.25, 0.5, 1 };
void initialize() {
	for (int i = 0; i < I; i++) {
		Input[i] = rand() / (float)RAND_MAX;
	}
	for (int i = 0; i < I; i++)
		for (int j = 0; j < M; j++)
			if (i - j >= 0) {
				Desired[i] += Input[i - j] * H[j];
			}

}

void main() {
	initialize();
	int a;
	long T, n = 0;
	double D, Y, E;
	double W[M] = { 0.0 };
	double X[M] = { 0.0 };
	for (T = 0; T < I; T++) {
		for (int m = T; m > T - M; m--) {
			if (m >= 0)
				X[M + (m - T) - 1] = Input[m];
			else break;
		}

		D = Desired[T];
		Y = 0;
		for (int i = 0; i < M; i++)
			Y += (W[i] * X[i]);
		E = D - Y;
		if (E == 0.0)break;
		for (int i = 0; i < M; i++)
			W[i] = W[i] + (mu * E * X[i]);
		printf("\n % 10g % 10f % 10f", (float)T, Y, E);
	}
	printf("\nBobot:\n");
	for (int i = 0; i < M; i++) {
		printf("\n % 10d % 10f", i, W[i]);
	}

	system("pause");
}*/

//Deep Learning

//CNN

//Adaptif Fuzzy