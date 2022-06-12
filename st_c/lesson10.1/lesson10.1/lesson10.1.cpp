//取出结构体变量中的成员
# include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;

};   //还有其他定义方式 这种最好
int main()

{
	struct student st = { 80,18,'F' };   //初始化 
	struct student* pst = &st;  //形似 int* p=&a;

	st.age = 16;   //第一种方式
	pst->score = 66.6f;  //第二种方式
	//pst->score 在计算机内部会被转化为（*pst).score 这种写法是一种规定

	printf("%d %lf %c", pst->age, pst->score, pst->sex);
	//疑问：这里不管输入%f 还是%lf都能正常输出 66.6到底是flaoat类型 还是double类型
	return 0;
}