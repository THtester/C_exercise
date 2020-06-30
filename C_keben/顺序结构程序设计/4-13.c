// 编程序：输入两个无符号短整型数，依次计算它们的位与、位或、位按位加的结果。最后用十六进制数格式输出这两个数，以及上述3个运算结果。

#include <stdio.h>

void main()
{
	unsigned short i,j,x1,x2,x3;
	printf("请输入两个无符号短整型数：\n");
	scanf("%u,%u", &i, &j);
	x1 = i & j, x2 = i | j, x3 = i ^ j;
	printf("i = %x, j = %x\n", i, j);
	printf("i & j = %x, i | j = %x, i ^ j = %x\n", x1, x2, x3);
}
