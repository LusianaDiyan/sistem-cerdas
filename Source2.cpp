#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#define _CRT_SECURE_NO_DEPRECATE

//JST 2 Input
// AND
/*int main() {
	int x1, x2, w1 = 1, w2 = 1, th = 2, y, out;
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
	return 0;
}*/

// OR
 /*int main() {
 	int x1, x2, w1 = 2, w2 = 2, th = 2, y, out;
 	printf("X1=?");
 	scanf_s("%d", &x1);
 	printf("X2=?");
 	scanf_s("%d", &x2);
 	y = x1 * w1 + x2 * w2;
 	if (y >= th)
 		out = 1;
 	else
 		out = 0;
 	printf("Hasil=%d\n", out);
	system("pause");
     return 0;
 }*/

 // XOR
  /*int main() {
  	int x1, x2, w1 = 2, w2 = -1, w3 = -1, w4 = 2, w5 = 2, w6 = 2, out1, out2, out3, th = 2, z1, z2, y, out;
  	printf("X1=?");
  	scanf_s("%d", &x1);
  	printf("X2=?");
  	scanf_s("%d", &x2);
  	z1 = x1 * w1 + x2 * w2;
  	if (z1 >= th)
  		out1 = 1;
  	else
  		out1 = 0;
  	printf("Out1=%d\n", out1);
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
      return 0;
  }*/

//MCP3AND
/*void main() {
	int w1 = 1, w2 = 1, w3 = 1, t = 3;
	int x1, x2, x3, y, out;
	printf("Operasi AND\n");
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
//MCP3OR
/*void main() {
	int w1 = 2, w2 = 2, w3 = 2, t = 1;
	int x1, x2, x3, y, out;
	printf("Operasi OR\n");
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
//MCP3XOR
/*void main(){	int x1, x2, x3;	int i, y, z, y1, y2, y3, ya, yb, yc, yd, y4;	for (i = 0; i < 8; i++)	{		printf("Operasi XOR3\n");		printf("Input X1:");		scanf_s("%d", &x1);		printf("Input X2:");		scanf_s("%d", &x2);		printf("Input X3:");		scanf_s("%d", &x3);		y1 = x1 * 2 + x2 * (-1) + x3 * (-1);		if (y1 >= 2)			ya = 1;		else			ya = 0;		y2 = x1 * (-1) + x2 * 2 + x3 * (-1);		if (y2 >= 2)			yb = 1;		else			yb = 0;		y3 = x1 * (-1) + x2 * (-1) + x3 * 2;		if (y3 >= 2)			yc = 1;		else			yc = 0;		y4 = x1 * 1 + x2 * 1 + x3 * 1;		if (y4 >= 3)			yd = 1;		else			yd = 0;		z = ya * 2 + yb * 2 + yc * 2 + yd * 2;		if (z >= 2)			y = 1;		else			y = 0;		printf("Output:%d\n", y);}}*/

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

//OR Perceptrom
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
		printf("Operasi XOR3\n");
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


// Perceptron 7S
/*double d_rand()
{
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}
void main()
{
	int i, j, p, l, out[10], ERR[10], jum;
	float init = 0.15f, w[10][8], O[10], LR = 0.1f, error;

	int x[10][8] = {
		//a, b, c, d, e, f, g, bias
		{ 1, 1, 1, 1, 1, 1, 0, 1 }, //0
		{ 0, 1, 1, 0, 0, 0, 0, 1 }, //1
		{ 1, 1, 0, 1, 1, 0, 1, 1 }, //2
		{ 1, 1, 1, 1, 0, 0, 1, 1 }, //3
		{ 0, 1, 1, 0, 0, 1, 1, 1 }, //4
		{ 1, 0, 1, 1, 0, 1, 1, 1 }, //5
		{ 0, 0, 1, 1, 1, 1, 1, 1 }, //6
		{ 1, 1, 1, 0, 0, 0, 0, 1 }, //7
		{ 1, 1, 1, 1, 1, 1, 1, 1 }, //8
		{ 1, 1, 1, 0, 0, 1, 1, 1 }, //9
	};
	int T[10][10] = {

		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, //0
		{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, //1
		{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 }, //2
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 }, //3
		{ 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, //4
		{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }, //5
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 }, //6
		{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, //7
		{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 }, //8
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, //9
	};

	//inisialisasi bobot
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 8; i++)
		{
			w[j][i] = d_rand() * init;
			//printf("%f", w[i]);
		}
	}

	//training
	for (l = 0; l < 100; l++)
	{
		error = 0.0;
		jum = 1;
		for (p = 0; p < 10; p++)
		{
			for (j = 0; j < 10; j++)
			{
				O[j] = 0.0;
				for (i = 0; i < 8; i++)
				{
					O[j] = O[j] + x[p][i] * w[j][i];
				}
				if (O[j] > 0.0)
					out[j] = 1;
				else
					out[j] = 0;
				ERR[j] = T[p][j] - out[j];
				error = error + abs(ERR[j]);
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
		printf("%d: %f \n", l, error);
	}

	//running
	for (i = 0; i < 7; i++)
	{
		printf("X%d: ", i + 1);
		std::cin >> x[0][i];
	}

	for (j = 0; j < 10; j++)
	{
		O[j] = 0.0;
		for (i = 0; i < 8; i++)
		{
			O[j] = O[j] + x[0][i] * w[j][i];
		}
		if (O[j] > 0.0)
			out[j] = 1;
		else
			out[j] = 0;
		printf("%f", O[j]);
	}

	if ((out[0] == 1) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 0");
	if ((out[0] == 0) && (out[1] == 1) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 1");
	if ((out[0] == 0) && (out[0] == 0) && (out[2] == 1) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 2");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 1) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 3");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 1) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 4");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 1) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 5");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 1) && (out[7] == 0) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 6");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 1) & (out[8] == 0) && (out[9] == 0))
		printf("Output = 7");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 1) && (out[9] == 0))
		printf("Output = 8");
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] == 0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0) & (out[8] == 0) && (out[9] == 1))
		printf("Output = 9");
	system("pause");
}*/

//multiperceptron
/*--------------------- random function -----------------------*/
/*float  d_rand(void) {
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}
/*-------------------------- sigmoid ------------------------------*/
/*float  sigmoid(float u) {
	return ((float)(1.0 / (1.0 + exp(-u))));
}
int  main() {
	int i, j, k, p, l;
	float z, delta_o, delta_h[2], g1, f1[2];
	float y[3] = { 0.0, 0.0, 1.0 };
	int x[3][4] = { { 0, 0, 1, 1 },
	{ 0, 1, 0, 1 },
	{ 1, 1, 1, 1 } };
	float t[4] = { 0, 1, 1, 0 };
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
		ch = _getwch();
		if (ch == 'e')break;
	}
}*/

// backpropagation
/*--------------------- random function -----------------------*/
float  d_rand(void)
{
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}
/*-------------------------- sigmoid ------------------------------*/
float  sigmoid(float u)
{
	return ((float)(1.0 / (1.0 + exp(-u))));
}
void main()
{
	int i, j, p, l;
	float z, delta_o, delta_h[6], g1, f1[6];
	float y[6] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };
	float x[11][4] = { { 1.00, 1.00, 1.00, 1.00 },
	{ 1.00, 0.50, 1.00, 1.00 },
	{ 1.00, 0.50, 0.00, 1.00 },
	{ 1.00, 0.00, 0.00, 1.00 },
	{ 0.50, 1.00, 1.00, 1.00 },
	{ 0.50, 0.50, 1.00, 1.00 },
	{ 0.50, 0.50, 0.00, 1.00 },
	{ 0.50, 0.00, 0.00, 1.00 },
	{ 0.00, 1.00, 1.00, 1.00 },
	{ 0.00, 0.50, 0.00, 1.00 },
	{ 0.00, 0.00, 1.00, 1.00 } };
	float t[11] = { 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0 };
	float w[6][4], O[6], s[6], LR = 0.1f, init = 0.15f, error;
	FILE * f;
	f = fopen("error.txt", "w");
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
		fprintf(f, "%f\n", error);
		if (error < 0.00001)break;
	}
	fclose(f);
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
}

