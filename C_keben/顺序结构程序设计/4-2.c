// 编程序，调用系统函数计算9的平方根、-10的绝对值、sin(3)、cos(3)的值

#include <stdio.h>
#include <math.h>

void main()
{
	float sqrt1, fabs1, sin1, cos1;
	sqrt1 = sqrt(9.0);
	fabs1 = fabs(-10.0);
	sin1 = sin(3.0);
	cos1 = cos(3.0);
	printf(" 9的平方根为：%.2f\n -10的绝对值为：%.2f\n sin(3)的值为：%.2f\n cos(3)的值为：%.2f\n",sqrt1, fabs1, sin1, cos1);
}