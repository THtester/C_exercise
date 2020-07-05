// 在主函数中定义两个双精度变量x，y，并输入，利用函数交换两个双精度数x，y，并且要求函数的参数是指针类型。

#include <stdio.h>

void swap(x,y)
double *x,*y;
{
	double t;
	t=*x;
	*x=*y;
	*y=t;
}

void main()
{
	double x,y;
	scanf("%lf,%lf", &x,&y);
	swap(&x,&y);
	printf("x=%f,y=%f\n",x,y);
}