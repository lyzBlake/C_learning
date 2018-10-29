#include <stdio.h>
int main(void)
{
	int a, b;

	puts("请输入两个整数。");
	printf("整数a:");  scanf_s("%d", &a);
	printf("整数b:");  scanf_s("%d", &b);

	printf("a除以b得%d余%d。\n", a / b, a%b);

	getchar();
	return 0;
}