// 编程序：判断某字符型变量中存放的是否为小写字母

#include <stdio.h>

void main()
{
	int yn1, yn2, yn3;
	char ch1 = 'A', ch2 = 'b', ch3 = '2';
	yn1 = ch1 >= 'a' && ch1 <= 'z';
	yn2 = ch2 >= 'a' && ch2 <= 'z';
	yn3 = ch3 >= 'a' && ch3 <= 'z';
	printf("yn1 = %d yn2 = %d yn3 = %d\n",yn1,yn2,yn3);
}