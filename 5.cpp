#include <stdio.h>
int main(void)
{
	double vx, vy;

	puts("��������������");
	printf("ʵ��vx:"); scanf_s("%lf", &vx);
	printf("ʵ��vy:"); scanf_s("%lf", &vy);

	printf("vx+vy=%f\n", vx + vy);
	printf("vx-vy=%f\n", vx - vy);
	printf("vx*vy=%f\n", vx * vy);
	printf("vx/vy=%f\n", vx / vy);

	getchar();
	return 0;

}