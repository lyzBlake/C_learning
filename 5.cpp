#include <stdio.h>
int main(void)
{
	double vx, vy;

	puts("请输入两个数。");
	printf("实数vx:"); scanf_s("%lf", &vx);
	printf("实数vy:"); scanf_s("%lf", &vy);

	printf("vx+vy=%f\n", vx + vy);
	printf("vx-vy=%f\n", vx - vy);
	printf("vx*vy=%f\n", vx * vy);
	printf("vx/vy=%f\n", vx / vy);

	getchar();
	return 0;

}