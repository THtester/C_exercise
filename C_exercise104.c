// 从键盘输入一个字符，以回车换行符为结束标志，分别统计并输出英文字符和数字字符的个数。

#include <stdio.h>

void main()
{
	char ch;
	int en=0, sn=0;
	while((ch=getchar()) != '\n')
		if (ch >= '0' && ch <= '9')
			sn++;
		else
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
				en++;
		printf("英文字符个数为：%d，数字字符个数为：%d\n", en, sn);
}