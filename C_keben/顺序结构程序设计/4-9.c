// 编程序：输入一个字符，判断该字符是否为字母。是则输出1；否则输出0。

#include <stdio.h>

void main()
{
	char ch;
	int yn;
	printf("请输入一个字符：\n");
	scanf("%c", &ch);
	yn = ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z';
	printf("yn = %d\n", yn);
}