//目标是写出含指针的互换整形变量的函数 
/*
1.实参必须为普通变量的地址
2.形参必须为指针变量
3.互换方式懂的都懂
*/
# include <stdio.h>

void change1(int,int);
void change2(int * , int * );//这里是函数的形参 而且一般不会标明形参 重要的是形式
void change3(int *, int *);


void change1(int a, int b)
{
	int i;

	i = a;
	a = b;
	b = i;//函数内部定义的局部变量（仅在函数内生效）与函数外的变量不是一个概念（即使名字一样）
	return;
}

void change2(int * a, int * b)
{
	int * i;

	i = a;
	a = b;
	b = i;//这个函数只是互换了a,b的值 而a,b原本对应的值并没有发生互换
}

void change3(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}//正确写法

int main()
{

	int* i;
	int a = 2;
	int b = 3;
	i = &a;
	

	//指针和一维数组
	int x[5] = { 1,2,3,4,5 };

	x[1] = *(x + 1);
	printf("%p", &x[0]);
	printf("%p", &x);
	//输出结果相同 说明以上两个地址相同
	return 0;
}