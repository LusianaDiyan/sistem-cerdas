#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void main() {
	int w1 = 2, w2 = 2, w3 = 2, t = 1;
	int x1, x2, x3, y, out;
	printf("Operasi OR\n");
	printf("Input x1 =");
	scanf_s("%d", &x1);
	printf("Input x2 =");
	scanf_s("%d", &x2);
	printf("Input x3 =");
	scanf_s("%d", &x3);

	y = (w1 * x1) + (w2 * x2) + (w3 * x3);
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n", out);

}