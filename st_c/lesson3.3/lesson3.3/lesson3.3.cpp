//scanf 通过键盘将数据输入到变量中
/*用法
	1. scanf("s输入控制符“，输入参数);
	即将键盘输入的字符转化为输入控制符所规定格式的数据，然后存入参数的值为地址的变量中
	 */
#include <stdio.h>

int main()
{
	int i;
	char delta;
	int o;

	delta = 'A';
	scanf_s("%d", &i);   //这里要用scanf_s而不是scanf 因为较新版本的vs已经把scanf这个函数废弃了
	printf("%d\n", i);   //注意在scanf_s中的\n与printf中的不同 前者中的效果同下“遨游” 后者为换行指令
	printf("%c\n", delta);
	scanf_s("遨游%d", & o);   //此时若想正确输出时必须在输入数据前+“遨游“
	printf("%d", o);


	return  0;
}
/*
输入123df时输出结果为：
	
	123
	d
*/
