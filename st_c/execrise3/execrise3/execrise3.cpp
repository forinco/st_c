#include <stdio.h>
#include <math.h>

int main()
{
	//验证输入整数num是否为素数
	//第一种思路:
	/*int num,n,a;
		printf("请输入你要验证的数字：");
		scanf_s("%d", &num);
		a = num - 1;

		if (num <= 1)
			printf("输入数字%d不是素数", num);
		else if (2==num)
			printf("输入数字2为素数");
		else
		{
			for (n = 2; n < num; n++)
			{
				if (num%n==0)
				{
					printf("输入数字%d不是素数", num);
					break;
				}
				else
				{
					if (n !=a)
					{
						continue;
					}
					else
					{
						printf("输入数字%d为素数", num);
					}
				}

			}
		}*/
	//第二种思路:
	/*int num,n,a;
		a = 0;
		printf("请输入需要检验的数字：");
		scanf_s("%d", &num);

		if (num <= 1)
			printf("输入数字%d不是素数", num);
		else if (2==num)
			printf("输入数字2是素数");
		else
		{
			for (n = 2; n < num; n++)
			{
				if (num % n == 0)
					a++;
				else
				{
					n++;
					continue;
				}
			}
			if (a != 0)
				printf("输入数字%d不是素数", num);
			else
				printf("输入数字%d为素数", num);
		}*/

	//输出n以内所有素数:
	/*int n,num,x,a;
		a = 0;
		printf("请输入所需的n的数值：");
		scanf_s("%d",&n);

		if (n <= 1)
			printf("该范围内无素数");
		else if (2==n)
			printf("该范围内素数有：2");
		else if (3==n)
		printf("该范围内素数有:2\n3\n");
		else
		{
			printf("该范围内素数有:2\n3\n");

			for (num = 4; num <= n; num++)
			{
				for (x = 2; x < num; x++)
				{
					if (num % x == 0)
					{
						break;
					}
					else
					{
						if (x != num - 1)
						{
							continue;
						}
						else
							printf("%d\n", num);
					}

				}

			}

		}*/

	//猴子吃桃问题：
	/*int n, num;
	num = 1;
	printf("请输入天数：");
	scanf_s("%d", &n);
	for (; n!=0; n--)
	{
		if (n)
		{
			num++;
			num = num * 2;
		}
	}
	printf("%d", num);
	*/

	//小球下落问题：
	/*int N;
double M,x;

printf("请输入小球初始高度：");
scanf_s("%lf", &M);
x = M;
printf("请输入小球反弹次数：");
scanf_s("%d", &N);

for (; N != 0; N--)
{
	if (N)
	{
		M = M / 2.0;
	}//10 5 5 2.5
	x = x + (2*M);
}
x = x - M;
printf("小球最终高度为：%.2lf", M);
printf("小球经过的距离为：%.2lf",x);
*/

	//水仙花数（即各个位上数字的三次方的和为原数值）
	/*
int num1,num2, a, b, c;
printf("水仙花数有：");

 b < 10; b++)for (a = 0; a < 10; a++)
{
	for (b = 0;
	{
		for (c = 0; c < 10; c++)
		{
			num1 = (a * a * a) + (b * b * b) + (c * c * c);
			num2 = (a * 100) + (b * 10) + c;
			if (num1 == num2)
			{
				if (num1 > 1)
					printf("%d\n", num1);
			}
		}
	}
}
*/

	//求和（包括平方和 倒数和）
	/*
int a,b,n,x;
double c,y;
x = 0;
y = 0;

printf("<输入a表示为求1~a的和，b为平方和，c为倒数和>\n");

printf("请输入a的数值：");
scanf_s("%d", &a);

printf("请输入b的数值：");
scanf_s("%d", &b);

printf("请输入c的数值：");
scanf_s("%lf", &c);

for (n = 1; n <= a; n++)
{
	x = x + n;
}
printf("求和结果为：%d", x);

for (n = 1; n <= b; n++)
{
	x = x + (n * n);
}
printf("求平方和结果为：%d", x);

for (n = 1; n <= c; n++)
{
	y = y + (1.0 / n);
}
printf("求倒数和结果为：%lf", y);
*/

	//斐波那契数列
	/*
int a1,a2,n,m,x ;
printf("请输入所需的斐波那契数列位数n：");
scanf_s("%d", &n);
a1 = 0;
a2 = 1;
if (n < 1)
{
	printf("整蛊是吧 别这样");
}
else if (1==n)
{
	printf("0");
}
else  if (2==n)
{
	printf("1");
}
else
{
	for (m = 3; m <= n; m++)
	{
		x = a1 + a2;
		a1 = a2;
		a2 = x;
	}
	printf("%d", x);
}
*/

	//解一元二次方程（利用do...while连续运行)
	/*
	double a, b, c, x1, x2, delta;
	char w;

	printf("请分别输入二次函数变量数值：\n");
	do {
		printf("输入a=");
		scanf_s("%lf", &a);

		printf("输入b=");
		scanf_s("%lf", &b);

		printf("输入c=");
		scanf_s("%lf", &c);
		//scanf_s(" %lf %lf %lf", &a, &b, &c);

		delta = (b * b) - (4 * a * c);

		if (delta > 0)
		{
			x1 = ((-b) + sqrt(delta)) / (2 * a);
			x2 = ((-b) - sqrt(delta)) / (2 * a);
			printf("该方程有两个解且分别为 x1=%lf x2=%lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("该方程有唯一解：%lf\n", x1);
		}
		else
		{
			printf("该方程无解\n");
		}
		printf("是否继续运行?(输入Y或y继续）\n");

		scanf_s(" %c", &w);

	} while ('y' == w || 'Y' == w);
	*/

	//验证是否为回文数（输出n以内所有回文数）
	/*
int num1,num2,x;
x = 0;
printf("请输入您要验证的数字：");
scanf_s("%d", &num1);
num2= num1;
while (num1)
{
	x = 10 * x;
	x =x+ num1 % 10;
	num1 = num1 / 10;
}
if (x==num2)
{
	printf("输入数字是回文数");
}
else
{
	printf("输入数字不是回文数");
}
*/

	//二维数组数字对调



	return 0;
}