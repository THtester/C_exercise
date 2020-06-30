// 编程序：从键盘输入一个字符串，判断是否是回文。若是输出“Yes”，否则输出“No”。回文是指正向、反向的拼写都一样。如：asdfdsa。

#include <stdio.h>

void main()
{
	char string[80];
	int i, j, n;
	gets(string);
	n = strlen(string);
	j = n -1;
	for (i = 0; i < j; i++, j--)
		if (string[i] != string[j])
			break;
		if(i >= j)
			printf("Yes\n");
		else
			printf("No\n");
}