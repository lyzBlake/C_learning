#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d", &x);
	y = x % 10 * 100 + x / 10 % 10 * 10 + x / 100;
	printf("%d",y );

	return 0;
}