// 从键盘输入10个整数，由大到小排序后输出。

#include <stdio.h>
#define N 10

void main()
{
	int a[N], k, j, m;
	for(k=0; k<N; k++)
		scanf("%d", &a[k]);
	for(k=0; k<N; k++)
		for(j=k+1; j<N; j++)
			if(a[k]<a[j])
			{
				m=a[j];
				a[j]=a[k];
				a[k]=m;
			}
	for(k=0; k<N; k++)
		printf("%d ", a[k]);
	printf("\n");
}