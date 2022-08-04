#include "stdio.h"
#include <conio.h>
#include <math.h>
#include <stdlib.h>

//AND 2 Input
/**int main() {
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
    return 0;
}**/

//OR 2 Input
int main() {
    int x1, x2, w1 = 2, w2 = 2, th = 2, y, out;
    printf("x1=?");
    scanf_s("%d", &x1);
    printf("x2=?");
    scanf_s("%d", &x2);
    y = x1 * w1 + x2 * w2;
    if (y >= th)
        out = 1;
    else
        out = 0;
    printf("hasil=%d\n", out);
    return 0;
}

// XOR
/**int main() {
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
    return 0;
}**/