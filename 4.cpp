#include <stdio.h>
int main(void)
{
	int a, b;

	puts("����������������");
	printf("����a:");  scanf_s("%d", &a);
	printf("����b:");  scanf_s("%d", &b);

	printf("a����b��%d��%d��\n", a / b, a%b);

	getchar();
	return 0;
}