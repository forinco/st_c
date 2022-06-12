//通过函数完成结构体变量的输入和输出
#include <stdio.h>
#include<string.h>

struct student
{
	int age;
	char sex;
	char name[100];
};   //花括号后的分号不能省

void OutputStudent1(struct student st);  //函数声明举例 声明时可以不写变量名
void OutputStudent1(struct student st)   //单纯只是打印一些变量 则可以不用指针 但推荐使用指针（指针有许多优点
{
	printf("%d  %c\n", st.age,st.sex);
};
void OutputStudent2(struct student* pst)   //推荐使用
{
	printf("%d  %c\n", pst->age, pst->sex);
};
void InputStudent(struct student* pst)   //想要跨函数修改变量就必须借用指针
{
	pst->age = 18;
	//strcpy_s(pst->name, "姚同达");   //为什么不能正常运行
	pst->sex = 'M';
};


int main()
{
	struct student st;
	struct student* pst = &st;

	InputStudent(&st);   //对结构体变量输入
	OutputStudent1(st);   //对结构体变量输出
	OutputStudent2(&st);   //同上
	printf("%d  %c\n", pst->age, pst->sex);




	return 0;
}