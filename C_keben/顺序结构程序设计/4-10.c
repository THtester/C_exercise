// 编程序：输入一个字符，输出该字符对应的八进制数和十六进制数。

#include <stdio.h>

void main()
{
	char ch;
	printf("请输入一个字符：\n");
	scanf("%c", &ch);
	printf("ch_O = %o\n", ch);
	printf("ch_X = %x\n", ch);
}