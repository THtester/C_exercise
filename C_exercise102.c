// 编程序：输入年份year，如果是闰年，输出“Yes！”，否则输出“No！”。

#include <stdio.h>

void main()
{
	int year;
	printf("请输入年份：\n");
	scanf("%d", &year);
	if (year % 4 ==0 && year % 100 !=0 || year % 400 == 0)
		printf("Yes!\n");
	else
		printf("No!\n");
}