// 递归时出现printf("%d\t",s);的情况

#include <stdio.h>

long fun(int n)
{
	long s;
	if (n<=2)
		s=2;
	else
		s=n+fun(n-1);
	printf("%d\t",s);
	return s;
}

void main()
{
	fun(5);
	printf("\n");
}