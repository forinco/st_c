//   函   数
/*
如何定义一个函数：
	“函数的返回值” “函数的名字”（函数的形参列表）
	{
		函数的执行体
	}

return表达式的含义：
1.终止被调函数，向主调函数返回表达式的值
2.如果表达式为空，则只终止函数不向主调函数返回任何值

注意：如果函数名前的类型和函数执行体中的return表达式 ；中表达式的类型不同的话，
最终函数返回值的类型以函数名前的返回值类型为准。
要注意形参和实参的区别，函数内定义的参数也只有在函数内有效。

函数声明：
	1.告诉编译器即将可能出现的字符串是个函数
	2.告诉编译器即将可能出现的字符串代表的函数的形参和返回值的情况
	3.函数声明是语句 末尾必须加分号
	4.对库函数的声明是通过# include<库函数所在文件的名字.h>来实现的(如math.h stdio.h)
注意：
	定义函数不能放在调用函数的后面（也就是要先定义再调用 否则出错）

	函数的功能要简单且单一 以提高它的利用率
*/
#include <stdio.h>


#include <stdlib.h>
#include <malloc.h>

int max(int i, int j)
{
	if (i > j)
	{

		printf("%d\n", i);
		return i;
	}

	else
	{
		printf("%d\n", j);
		return j;

	}


 }
 


bool ifprime(int num)
{
	int  j;

	for (j = 2; j <= num; j++)
	{
		if (num == j)
		{
			return true;
			break;
		}
		if (num % j == 0)
		{
			return false;
			break;
		}
		else
		{
			if (j >= num/ 2)
			{
				return true;
				break;
			}
			else
				continue;
		}
	}

	int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
		else
			continue;
	}
	if (i == num)
		return true;
	else
		return false;
}



void change(int a, int b)
{
	int i;

	i = a;
	a = b;
	b = i;

	return;
}
   
//本函数没有互换的功能
int main()
{
	int i, j;
	int a, b, c;
	a = 1;
	b = 2;
	c=max(a, b);

	
	printf("%d", c);
	return 0;
}