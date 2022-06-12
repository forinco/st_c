#include <stdio.h>

int main()
{
	/*
	int a, b, c,t;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			printf("%d", a);
	}
	else if (b > c)
	{
		if (b > a)
			printf("%d", b);
	}
	else if (c > a)
	{
		if (c > b)
			printf("%d", c);
	}
	*/

	/*
	float f,c;
	scanf("%f", &f);

	c = 5 * (f - 32) / 9;

	printf("c=%.2f", c);
	*/

	/*
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
			printf("%d", a);
	}
	else if (b > c)
	{
		if (b > a)
			printf("%d", b);
	}
	else if (c > a)
	{
		if (c > b)
			printf("%d", c);
	}
	*/

	/*
	int x, y;
	scanf("%d", &x);

	if (x < 1)
		y = x;
	else if (x >= 1 && x < 10)
		y = 2 * x - 1;
	else if (x >= 10)
		y = (3 * x) - 11;

	printf("%d", y);
	*/
	
	/*
	int score;
	scanf("%d", &score);

	if (score >= 90)
		printf("A");
	else if (score < 90 && score >= 80)
		printf("B");
	else if (score < 80 && score >= 70)
		printf("C");
	else if (score < 70 && score >= 60)
		printf("D");
	else if (score < 60)
		printf("E");
	*/

	/*
	int a = 2;
	int Sn, len, t;
	Sn = 0;
	scanf("%d", &len);
	for (t = 0; t < len; t++)
	{
		Sn = Sn+a;
		a = a * 10 + 2;
	}


	printf("%d", Sn);
	*/

	/*
	float a = 2.0;
	float b = 1.0;
	float c,t;
	int N,i;
	c = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		c = c+(a / b);
		t = a;
		a = a + b;
		b = t;
	}
	printf("%.2f", c);
	*/

	/*
	int N,t,i,a;
	a = 1;
	scanf("%d", & N);

	for (i = 0; i < N-1; i++)
	{
		a = (a + 1) * 2;
	}
	printf("%d", a);
	*/

	/*
int a[10];
	int i,h,n;
	n = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &a[i]);
	}
	scanf("%d", &h);

	for (i = 0; i < 10; i++)
	{
		if (h+30>=a[i])
			n++;
	}
	printf("%d", n);
	*/

	return 0;
}