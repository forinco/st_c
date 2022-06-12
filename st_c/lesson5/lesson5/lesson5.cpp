//稍微有点意思的程序

#include <stdio.h>

int main()
{
	/*int val, x, y;
	y = 0;

	printf("请输入您要判断的数字:");

	scanf_s("%d", &val);
	x = val;
	while (x)
	{
		y = y * 10 + x %10;
		x /= 10;
	}

	if (val == y)
		printf("Yes! Yes! Yes!");
	else
		printf("No! No! No!")*/;



		//斐波那契数列

		printf("请输入您所需的数字位数:");
		int a1, a2, x,n;
		scanf_s("%d", &n);
		a1 = 1;
		a2 = 2;
		
		if (n == 1)
		{
			x = 1;
			printf("%d", x);
		}
		else if (n == 2)
		{
			x = 2;
			printf("%d", x);
		}
		else if (n > 2)
		{
			/*while (n > 2)
			{
				x = a1 + a2;
				a1 = a2;
				a2 = x;
				n--;
			}*/

			for (; n > 2; n--)
			{
				x = a1 + a2;
				a1 = a2;
				a2 = x;
			}

			
			printf("%d", x);
		}

		else
			printf("Are you sure about it?");
		



	return 0;
 }