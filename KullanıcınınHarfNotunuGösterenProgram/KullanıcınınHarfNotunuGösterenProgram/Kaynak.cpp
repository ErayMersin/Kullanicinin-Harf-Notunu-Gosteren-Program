#include<stdio.h>
#include<stdlib.h>

int main() {

	int sinav1, sinav2, sinav3, proje, ort;

	printf("1.Sinav Notunuz: ");
	scanf_s("%d", &sinav1);

	printf("2.Sinav Notunuz: ");
	scanf_s("%d", &sinav2);

	printf("3.Sinav Notunuz: ");
	scanf_s("%d", &sinav3);

	printf("Proje Notunuz: ");
	scanf_s("%d", &proje);

	ort = (sinav1 + sinav2 + sinav3 + proje) / 4;

	printf("\n");
	printf("Ortalamaniz: %d\n", ort);
	printf("Harf Notunuz: ");


	if (ort < 50)
	{
		printf("ff");
	}
	if (ort >= 50 && ort < 60)
	{
		printf("dd");
	}
	if (ort >= 60 && ort < 70)
	{
		printf("cc");
	}
	if (ort >= 70 && ort < 85)
	{
		printf("bb");
	}
	if (ort >= 85)
	{
		printf("aa");
	}

	printf("\n");

	return 0;
}