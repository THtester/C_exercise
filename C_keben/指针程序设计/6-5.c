// 从输入的三个实数中寻找最大数并输出。要求用指针变量处理。

#include <stdio.h>

void main()
{
	float a,b,c,*pa=&a,*pb=&b,*pc=&c,max;
	printf("请输入三个实数：\n");
	scanf("%f,%f,%f", pa,pb,pc);
	if(*pa>*pb)
		max=*pa;
	else
		max=*pb;
	if(*pc>max)
		max=*pc;
	printf("max=%f\n", max);
}