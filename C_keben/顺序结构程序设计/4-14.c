// 编程序：输入非0的三位整数，依次输出该数的正（负）号和百位、十位、个位数字。

#include <stdio.h>
#include <math.h>

void main()
{
	char c1, c2, c3, c4;
	int x;
	printf("请输入一个非0的三位整数：\n");
	scanf("%d", &x);
	c4 = (x > 0?'+':'-');
	x = abs(x);
	c3 = x % 10 + 48;
	x = x / 10;
	c2 = x % 10 + 48;
	c1 = x / 10 + 48;
	printf("%c \n%c \n%c \n%c\n", c4, c1, c2, c3);
}