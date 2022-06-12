//学生管理系统2.0

#include <stdio.h>
#include <malloc.h>

struct student
{
	char name[20];
	char sex;
	int age;
	float score;
};

void input(struct student* p, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("\n第%d位学生\n", i + 1);

		printf("学生姓名：");
		scanf_s("%s", (p + i)->name, 40);
		getchar();

		printf("学生性别：");
		scanf_s("%c", &(p + i)->sex);

		printf("学生年龄：");
		scanf_s("%d", &(p + i)->age);

		printf("学生成绩：");
		scanf_s("%f", &(p + i)->score);
	}
}

void sort(struct student* p, int length)
{
	int a, b;
	struct student t;

	for (a = 0; a < length - 1; a++)
	{
		for (b = 0; b < length - 1 - a; b++)
			if ((p + b)->score < (p + b + 1)->score)
			{
				t = *(p + b);
				*(p + b) = *(p + b + 1);
				*(p + b + 1) = t;
			}
	}
}

void output(struct student* p, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("\n%s     %c     %d     %f", (p + i)->name, (p + i)->sex, (p + i)->age, (p + i)->score);
	}
}

int main()
{
	int length;

	printf("请输入学生数量：");

	scanf_s("%d", &length);
	struct student* p = (struct student*)malloc(sizeof(struct student) * length);

	printf("请输入学生的相关信息\n\n");
	input(p, length);

	sort(p, length);

	output(p, length);

	return 0;
}