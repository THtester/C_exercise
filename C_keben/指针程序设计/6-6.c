// 输入三个整数，按从小到大的顺序输出。要求用指针变量处理。

#include <stdio.h>

void main()
{
	int a,b,c,*pa=&a,*pb=&b,*pc=&c,*p;
	printf("请输入三个整数：\n");
	scanf("%d,%d,%d", pa,pb,pc);
	if(*pa>*pb)
	{
		p=*pa;
		*pa=*pb;
		*pb=p;
	}
	if(*pa>*pc)
	{
		p=*pa;
		*pa=*pc;
		*pc=p;
	}
	if(*pb>*pc)
	{
		p=*pb;
		*pb=*pc;
		*pc=p;
	}
	printf("%d<=%d<=%d\n",*pa,*pb,*pc);
	printf("%d<=%d<=%d\n",a,b,c);	// 输出的结果不一定是从小到大排列的，因为程序中交换的是指向这3个变量的指针变量中的地址，而不是直接交换这3个变量的值。
}