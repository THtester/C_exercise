// 编写函数f计算s=x+(x*x)/2+(x*x*x)/3+ ...+(x*...*x)/n的值
// 编写主函数，从键盘输入x和n的值，调用函数f计算并输出结果（保留两位小数）

#include <stdio.h>
#include <math.h>

float f(int x, int n)
{
	if(n==1)
		return x;
	else
		return pow(x,n)/n + f(x, n-1);
}

void main()
{
	int x, n;
	printf("请输入x，n的值：\n");
	scanf("%d,%d", &x, &n);
	printf("%.2f\n", f(x,n));
}