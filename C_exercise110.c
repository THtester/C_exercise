// 输入10个整数到数组a中并输出，将数组各元素依次向后循环移动一个位置，输出移动后的数组a。
//	移动前： a[0] a[1] a[2] a[3] a[4] a[5] a[6] a[7] a[8] a[9]
//	移动前： a[9] a[0] a[1] a[2] a[3] a[4] a[5] a[6] a[7] a[8]

#include <stdio.h>

void main()
{
	int a[10], i, temp;
	for (i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
		printf("%5d", a[i]);
	}
	printf("\n");
	temp=a[9];
	for(i=9; i>0; i--)
		a[i]=a[i-1];
	a[0] = temp;
	for(i=0; i<10; i++)
		printf("%5d", a[i]);
	printf("\n");
}