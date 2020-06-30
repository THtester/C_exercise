// 使用简单的if-else语句举例。输入一个字符，是字母，则输出“YES！”；否则，输出“NO！”。

#include <stdio.h>

void main()
{
	char ch;
	printf("请输入一个字符：\n");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("YES!\n");
	else
		printf("NO!\n");
}