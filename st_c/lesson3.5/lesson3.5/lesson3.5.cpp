/*
if相关知识：
	if语句默认只控制一个语句 若想执行多个就必须用{}
	else后不能加（） 虽然语法上没有错误但是语句无意义
*/

#include <stdio.h>

int main()

{



	//if (0);   //像这样的在if（）后加的 ";"是空语句会使if失去对之后语句的控制 即“中断”的作用
	//printf("T");
	//else if (0);
	//	printf("F");



/*
if (0)
	printf("F");
if (1)
	printf("T");   //这里就是使用了数字判断的相关知识 非零为真 零为假
*/

	  
/*
if (1 < 2)
	printf("T");
else
	printf("F");

printf("X");   //此处共为两个语句
*/



/*
double delta = 0;
if (delta > 0)
	printf("该方程有两个解");
printf("打断！");   //这条语句真的有“打断”的作用 因为if默认只输出一个语句 会导致else前无可识别if语句 导致程序报错
else if (delta == 0)
printf("该方程有唯一解");
else
	printf("该方程无解");
*/



/*
float score;
	scanf_s("%f", &score);
	if (90 <= score <= 100）   //反面教材 正确应为：(score>=90&&score<=100) 此处只要输入值有效 都会正常输出“你说得对” 因为系统会先运行前半句 即”90<=score" 这里会直接进行逻辑运算 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出 输出结果为1或0 此时再进行后半段时if恒成立 即永远都会正常输出
		printf("你说得对");      
*/



/*
	//互换数字

	//int a = 1;
	//int b = 2;
	//int t;

	//a = b;
	//b = a;   //此处两个语句无法完成a b的互换

	//t = a;
	//a = b;
	//b = t;   //需要一个新的容器才能完成两个容器内容的互换
	//printf("%d %d", a, b);
*/




	//对数字排序

	/*float a, b, c, t;
	scanf_s("%f %f %f", &a, &b, &c);

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%f %f %f", a, b, c);   
	*/  
	//在%f间加上”.“可以限制小数位数.几就是几位




/*
	if (1)
		printf("A");
	else if (1)
		printf("B");   //if...else if... else if...   只会运行第一个条件成立的语句
*/



//三目运算符:

	//A ? B : C等价于：
	//if (A)
	//B;
	//else
	//C;


	


	return 0;
}