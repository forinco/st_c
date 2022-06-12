//多级指针
# include <stdio.h>

int main()

{
	int i;
	int* p = &i;
	int** q = &p;
	int*** r = &q;   //*r=q,**r=p,***r=i

	//r = &p;   //error 因为r是int***类型的 它只能存储int**类型的变量的地址（p为int*）

	return 0;
}