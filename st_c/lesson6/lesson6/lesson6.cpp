//do....while用法实例（偏向于人机互动）
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, delta, x1, x2;
	char ch;

	do {
		printf("请分别输入二次函数的系数：");

		printf("a=");
		scanf_s("%lf", &a);

		printf("b=");
		scanf_s("%lf", &b);

		printf("c=");
		scanf_s("%lf", &c);

		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			x1 = ((-b) + sqrt(delta)) / (2 * a);
			x2 = ((-b) - sqrt(delta)) / (2 * a);
			printf("该方程有两个解且分别为\nx1=%lf\nx2=%lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("该方程有唯一解\nx1=x2=%lf", x1);
		}
		else if (delta < 0)
		{
			printf("该方程无解");
		}
		printf("是否继续进行计算（Y||N）：");
		scanf_s(" %c", &ch);

	} while ('y' == ch || 'Y' == ch);


	return 0;
}