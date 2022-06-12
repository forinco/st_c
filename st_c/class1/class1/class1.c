#include <stdio.h>
#include <math.h>

int main()
{
	//printf("/******************\n   how are you\n**************/");



	//int T;
	//int C;

	//C=
	printf("请分别输入三角形三边数值 并用空格隔开\n");
	int       a;
	int b;
	int c;
	double p;
	double S;
	scanf_s("%d %d %d", &a, &b, &c);
	p = (a + b +c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	

	if (a + b > c && a * a + b * b == c * c)
	{
		printf("该三角形为直角三角形 且面积为：\n %lf", S);
	}
	else if (a + b > c && a * a + b * b != c * c)
	{
		printf("该三角形不是直角三角形");
	}
	else if (a + b<=c)
	{
		printf("输入数值不是三角形");
	}

	return 0;
}