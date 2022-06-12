//判断回文数
#include <stdio.h>
int main()
{
	int num, num1;
	int i = 0;

	printf("请输入数字：");
	scanf_s("%d", &num);

	num1 = num;

	while (num)
	{
		i = i * 10;
		i = i + num % 10;
		num = num / 10;
	}

	if (i == num1)
		printf("该数字是回文数");
	else
		printf("该数字不是回文数");

	return 0;
}