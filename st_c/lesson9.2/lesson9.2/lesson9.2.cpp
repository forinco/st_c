//写一个函数可以输出一维数组的所有内容
/*
确定一个一维数组需要两个参数:
数组第一个元素的地址
数组的长度
*/
#include <stdio.h>

void printfp(int* p,int lenth)
{
	int i;
	for (i = 0; i < lenth; i++)
	{
		printf("[%d]=%d\n", i, *(p + i));
	}

}

int main()
{
	int a[5] = { 1,3,5,345,7 };
	printfp(a, 5);
	return 0;
}