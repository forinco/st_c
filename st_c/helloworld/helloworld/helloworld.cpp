#include <stdio.h>
int main(void)
{
	double a = 123456788888888888e-8;
	printf("%f", a);
	return 0;
//为什么输出的不是全部数字而是一部分？(四舍五入了？）

}