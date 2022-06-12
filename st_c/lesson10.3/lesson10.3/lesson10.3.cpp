//结构体运用：学生管理系统.demo
/*
结构体中
st1+st2 st1*st2 st1/st2 这种写法都是错误的
st1=st2 st2=st1   这个是正确的
*/
/*
scanf与scanf_s的区别：
	在目前编译器环境中scanf_s是scanf的安全版本
	scanf在读取字符串时并不会检查输入字符串所占空间是否小于用于存储对应字符串所开辟的空间
	而超出的内容会直接覆盖在内存原有内容上会把内存内容搞乱

	一方面可能会因为输入字符串过长而导致运行错误
	另一方面 有意的人可能会故意输入很长的字符串来覆盖掉内存其他部分的内容(也就是恶意代码)

	scanf_s允许指定字符串的读入串上限 这样可以避免上面所提到的安全问题
	(不是加了_s就一劳永逸了 前提是指定了上限 平常的使用一般都不会去指定 所以也会出现报错现象 这时可以选择换用scanf 也可以选择指定内存大小)

	(就目前使用下来 scanf_s只有在输入字符串时出现了问题 需要指定上限)
*/

#include <stdio.h>
#include <malloc.h>

struct student
{
	char name[100];
	char sex;
	int age;
	float score;
};
int main()
{
	int i, t;
	struct student x;
	int length;
	struct student* p;

	printf("请输入学生的个数：");
	scanf_s("%d", &length);
	p = (struct student*)malloc(sizeof(struct student) * length);

	printf("请输入学生相关信息\n");
	for (i = 0; i < length; i++)
	{
		printf("\n第%d位学生\n", i + 1);

		printf("学生姓名：\n");
		scanf_s("%s", (p + i)->name, 40);
		getchar();   //这里加一个getchar是把\n置于缓冲区 防止信息输入完成后所敲的回车(\n)影响后续字符的输入

		printf("学生性别：\n");
		scanf_s("%c", &p[i].sex);

		printf("学生年龄：\n");
		scanf_s("%d", &p[i].age);

		printf("学生成绩：\n");
		scanf_s("%f", &p[i].score);
	}

	for (i = 0; i < length - 1; i++)   //冒泡循环
	{
		for (t = 0; t < length - 1 - i; t++)
		{
			if (p[t].score < p[t + 1].score);
			{
				x = *(p + t);
				*(p + t) = *(p + t + 1);
				*(p + t + 1) = x;
			}
		}

	}

	for (i = 0; i < length; i++)
		printf("\n%s    %c    %d    %f", p[i].name, p[i].sex, p[i].age, p[i].score);


	return 0;
}
