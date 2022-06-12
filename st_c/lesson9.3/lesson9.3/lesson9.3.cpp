//malloc函数的用法和介绍（动态内存分配）
#include <stdio.h>
#include <malloc.h>//使用malloc函数时要加头文件

int main()
{
	
	int i = 5;   //分配了4个字节 静态分配
	int* p = (int*)malloc(4);
		/*
		1.要使用"malloc"这个函数必须添加头文件"malloc.h"
		2.malloc函数有且只有一个形参且必须为整形
		3.括号内的4表示请求系统为本程序分配了4个字节
		4.malloc函数只能返回变量第一个字节的地址
		5.9行代码一共占了8个字节 p的内存为静态分配 p所指向的内存是动态分配的
		*/
	free(p);   //意为将p所指向的内存释放 不是释放p本身（因为p为静态分配 只能由系统自动释放）

	//动态构造一维数组
	printf("请输入你需要输入的数字个数：");
	int len;
	scanf_s("%d", &len);
	int* p = (int*)malloc(sizeof(int) * len);   //这串代码就是在动态构造一维数组 意思可以理解为int* a[len];

	//对构造的数组进行操作
	int i;
	printf("请输入数字：");
	for (i = 0; i < len; i++)
		scanf_s("%d", &p[i]);

	//输出数组
	for (i = 0; i < len; i++)
		printf("%d/n", p[i]);

	//释放p指针所指向的内存
	free(p);

	return 0;
}
//改变动态内存所存储的内存大小：realloc（p,100)将p指向的内存改为100字节 