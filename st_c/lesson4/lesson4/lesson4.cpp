//2021-9-17 16:04:25

/*
	因为浮点型是非准确存储 在存储过程中会产生误差
	比如float a=0 那么输出的a不会是0 而是一个近似的数
	所以 循环更新的便令不能定义为浮点型
*/
#include <stdio.h>

int  main()

{
/*
	float sum;
	float i;
	sum = 0;
	for (i = 1; i < 10; i += 2)
	{
		sum = sum + i;
		printf("%f\n",sum );
		printf("芜湖！");
	}
*/



/*
	int sum;
	int i;
	sum = 0;
	for (i = 3; i < 10; ++i)
	{
		if (i%3==0)
		sum = sum + i;
		
}
	printf("sum=%d\n", sum);
	printf("mission complete");
*/
	


//进行强制数据类型转换

	/*int i;
	float sum;
	sum = 0;1/i)
	for (i = 1; i <= 100; i++)
		sum = sum + 1 / (float)(i);   //如果写成sum=sum+(float)(1/i)是错误的 因为后续计算已经完成 答案已经为sum+0 此时再进行转化已无意义 还有更简单的写法：sum=sum+1.0/i
	printf("%f", sum);*/				




	return 0;
}