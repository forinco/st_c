//   指针



#include <stdio.h>

int main()
{
	int * p;   //这里p为名称，"int *"表示某变量（这里为p）存放的是int类型变量的的地址 
	//注意：这里并不表示定义了一个变量*p 应该说 p为变量名 p变量数据的类型为int*类型 只要*后跟指针变量 那么他所表示的就是他所他指向的变量
	int a = 1;

	p = a;    //这样打的话就会报错，因为变量类型不一致，p只能存放int类型变量的地址，而不知int变量本身。
	p = 55;   //错误理由同上
	p = &a;   //这里为正确写法
	/*
	p保存了a的地址，因此说p指向a（含义）
	p不是a a也不是p 修改a的值不影响p的值 反过来也同理
	如果一个指针变量指向了一个普通变量 则有：
		*指针变量  所表达的意思就完全等同于 普通变量（即*p与a等同）
		也可以理解为：所有出现a的地方都可以替换成*p 反之也可
		*p就是以p的内容为地址的变量
	*/



	return 0;
}