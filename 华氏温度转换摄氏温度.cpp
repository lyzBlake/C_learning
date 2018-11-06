#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float C,f;
	scanf("%f",&f);
	C = (f - 32) / 1.8;
	printf("C=%.2f\n",C);
	return 0;
}