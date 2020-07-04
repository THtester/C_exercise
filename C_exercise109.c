// 将50名学生的姓名和成绩由键盘输入，计算并输出平均成绩。

#include <stdio.h>
#define N 5
struct student
{
	char name[20];
	float score;
};

void main()
{
	struct student s[N];
	int i;
	float average=0.0;
	for(i=0; i<N; i++)
	{
		scanf("%s%f",&s[i].name, &s[i].score);
		average+=s[i].score;
	}
	average=average/5;
	printf("average = %.2f\n",average);
}