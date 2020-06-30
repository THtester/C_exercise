// 编程序：输入单个字符，判断是否为数字字符。是则输出字符Y，否则输出字符N。

#include <stdio.h>

void main()
{
	char ch, yn;
	printf("请输入一个字符：\n");
	ch = getchar();
	yn = (ch >= '0' && ch <= '9')?'Y':'N';
	putchar(yn);
	printf("\n");
}