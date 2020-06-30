// 嵌套的if语句编程：输入一个整数x，若大于5且小于10的，则输出“5<x<10”，否则无输出。

#include <stdio.h>

void main()
{
	int x;
	printf("请输入一个整数：\n");
	scanf("%d", &x);
	if (x > 5)
		if (x < 10)
			printf("5 < x < 10\n");
}