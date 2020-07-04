/*
利用循环结构输出一下图形：
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
 */

#include <stdio.h>

void main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i; j++)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("%2d",j);
		for(j=i-1; j>=1; j--)
			printf("%2d", j);
		printf("\n");
	}
}