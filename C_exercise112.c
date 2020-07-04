// 从键盘输入a1,a2,...,a20，按下列公式计算并输出b1,b2,...,b10的值。
// b1=sqrt((a1*a1)+(a20*a20)),...,bi=sqrt((ai*ai)+a21-i*a21-i),b10=sqrt((a10*a10)+a11*a11)

#include <stdio.h>
#include <math.h>

void main()
{
	int i;
	float a[21],b[11];
	printf("请输入a1,a2,...,a20的值：\n");
	for(i=1; i<=20; i++)
		scanf("%f", &a[i]);
	for(i=1; i<=10; i++)
	{
		b[i]=sqrt(a[i]*a[i]+a[21-i]*a[21-i]);
		printf("b[%d] = %.2f\n", i, b[i]);
	}
}