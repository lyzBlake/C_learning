#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int e, f, g;
	int x, y, z;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e = a > b ? a : b;		x = a < b ? a : b;
	f = e > c ? e : c;		y = x < c ? x : c;
	g = f > d ? f : d;		z = y < d ? y : d;
	printf("max=%d, min=%d\n",g,z);
	return 0;
}