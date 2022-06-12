#include <stdio.h>

int main(void)
{
	char  ch =  'A';
	//char ch = 'AB'错误 因为‘只能括住单个字符
	//char ch = "AB"错误 因为“AB”是一个字符串，我们不能把单个字符定义为字符串
	//char ch = "A"错误 因为“内默认后跟\n 即此时实际为”A\n“后续理由同上
	//char ch = 'b'错误 不能二次定义
	ch = 'D';// 正确 
	printf("%c",ch);
		return 0;
}