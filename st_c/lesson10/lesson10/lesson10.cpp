//结构体
# include <stdio.h>
//第一种定义方式   //推荐使用第一种

struct student1
{
	int age;
	float score;
	char sex;

};


//第二种定义方式
/*
struct student2
{
	int age;
	float score;
	char sex;

}st2;
*/

//第三种定义方式
/*
struct 
{
	int age;
	float score;
	char sex;
}st3;
*/
int main()

{
	struct student1 st = { 16,88,'F' };
	struct student1 st2;
	st2.age = 10;
	st2.score = 80;
	st2.sex = 'M';

	printf("%d %f %c\n",st.age, st.score, st.sex);
	printf("%d %f %c", st2.age, st2.score, st2.sex);



	return 0;
}