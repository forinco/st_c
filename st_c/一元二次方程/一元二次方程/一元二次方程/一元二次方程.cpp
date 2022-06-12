/*
2022-4-3 15:41:07
do……while实现一元二次方程
*/
#include <stdio.h>
#include <math.h>

int main()
{
	char s;
	do
	{
		double a, b, c;
		double x1, x2, delta;

		printf("请依次输入一元二次方程的三个参数：");
		printf("a=");
		scanf_s("%lf", &a);
		printf("b=");
		scanf_s("%lf", &b);
		printf("c=");
		scanf_s("%lf", &c);

		delta = b * b - 4 * a * c;

		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;

		if (delta == 0)
			printf("方程有唯一解：%lf", x1);
		else if (delta < 0)
			printf("方程无实数解");
		else
			printf("方程有两个实数解:x1=%lf  x2=%lf", x1, x2);

		printf("是否继续：（填'y'或'n'）");
		getchar();
		scanf_s("%c", &s);
	} while (s == 'Y' || s == 'y');//这里不能用字符串


	return 0;
}