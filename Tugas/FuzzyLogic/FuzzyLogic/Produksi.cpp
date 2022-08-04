#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

float MFx(float a, float b, float z) {
	float hasil_MFx;
	if ((z >= a) && (z < b)) hasil_MFx = (b - z) / (b - a);
	if (z <= a)hasil_MFx = 1;
	if (z >= b)hasil_MFx = 0;
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
	float permintaan = 0;
	float persediaan = 0;
	printf("Berapa banyak permintaan :");
	scanf_s("%f", &permintaan);
	printf("Berapa banyak persediaan :");
	scanf_s("%f", &persediaan);
	
	printf("Persoalan : \n");

	u1x = MFx(1000, 5000, permintaan);//permintaan turun
	printf("Fungsi keanggotaan permintaaan turun: %.2f\n", u1x);
	u1y = MFy(1000, 5000, permintaan);//permintaan naik
	printf("Fungsi keanggotaan permintaaan naik: %.2f\n", u1y);

	u2x = MFx(100, 600, persediaan);//persediaan turun
	printf("Fungsi keanggotaan permintaaan sedikit: %.2f\n", u2x);
	u2y = MFy(100, 600, persediaan);//persediaan naik
	printf("Fungsi keanggotaan permintaaan banyak: %.2f\n", u2y);

	//rule 1 ; IF permintaan TURUN And Persediaan BANYAK THEN Produksi barang BERKURANG
	minR1 = Min(u1x, u2y);
	printf("Minimum permintaan TURUN And Persediaan BANYAK : %02\n", minR1);
	proR1 = 7000 - minR1 * 5000;
	printf("Produksi berkurang ; %.0f\n", proR1);

	//rule 2 ; IF permintaan TURUN And Persediaan SEDIKIT THEN Produksi barang BERKURANG
	minR2 = Min(u1x, u2x);
	printf("Minimum permintaan TURUN And Persediaan SEDIKIT : %.2f\n", minR2);
	proR2 = 7000 - minR2 * 5000;
	printf("Produksi berkurang ; %.0f\n", proR2);

	//rule 3 ; IF permintaan NAIK And Persediaan BANYAK THEN Produksi barang BERTAMBAH
	minR3 = Min(u1y, u2y);
	printf("Minimum permintaan NAIK And Persediaan BANYAK : %.2f\n", minR3);
	proR3 = 2000 + minR3 * 5000;
	printf("Produksi bertambah; %.0f\n", proR3);

	//rule 4 ; IF permintaan NAIK And Persediaan SEDIKIT THEN Produksi barang BERTAMBAH
	minR4 = Min(u1y, u2x);
	printf("Minimum permintaan NAIK And Persediaan SEDIKIT : %.2f\n", minR4);
	proR4 = 2000 + minR4 * 5000;
	printf("Produksi bertambah; %.0f\n", proR4);

	//Defuzzyfikasi
	float pembilang = minR1 * proR1 + minR2 * proR2 + minR3 * proR3 + minR4 * proR4;
	float penyebut = minR1 + minR2 + minR3 + minR4;
	float hasil_COA = pembilang / penyebut;
	printf("Produksi %.0f\n", hasil_COA);
}