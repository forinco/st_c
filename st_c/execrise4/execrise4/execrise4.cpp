#include <stdio.h>

int main()

{
//输出3*3矩阵对角线元素之和
	/*
	int p[3][3]{ 1,2,3,4,5,6,7,8,9 };
	int a, b,sum;
	sum = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = a; b < 3; b++)
		{
			sum = sum + p[a][b];
			break;
		}
	}
	printf("%d", sum);
	*/

//10个数的排序s
	/*
	int a[10] = { 1, 14, 5, 141, 9, 1, 9, 8, 10, };
	int x, y,i;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (a[x] > a[y])
			{
				i = a[x];
				a[x] = a[y];
				a[y] = i;
			}
			else
				continue;
		}
	}
	for (x = 0; x < 10; x++)
	{
		printf("%d   ", a[x]);
	}
	*/

	return 0;
	
}