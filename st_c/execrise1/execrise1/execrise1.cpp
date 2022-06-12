#include <stdio.h>
#include <math.h>
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 1;
	double x1;
	double x2;
	double delta;
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该方程有两个解，x1=%f,x2=%f", x1, x2);
	}
	else if (delta = 0)
	{
		x1 = -b / 2 * a;
		x2 = x1;
		printf("该方程有唯一解,x1=x2=%f", x1);
	}
	else if (delta < 0)
	{
		printf("该方程无解");
	}
	return 0;

}