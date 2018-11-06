#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,z;
	scanf("%d", &x);
	y = x / 100 + (x % 100) / 10 + (x % 10);
	z=abs(y);
	printf("%d", z);
	return 0;
}