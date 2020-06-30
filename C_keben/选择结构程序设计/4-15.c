// 输入一个字符，是字母则输出“yes！”，否则无输出。

#include <stdio.h>

void main()
{
	char ch;
	printf("输入一个字符：\n");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("yes!\n");
}