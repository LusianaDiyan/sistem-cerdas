#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void main()
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
		printf("Output:%d\n", y);
	}
}
