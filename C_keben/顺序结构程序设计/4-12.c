// 编程序：求二元一次方程a*x*x + b*x + c = 0的两个实根（假定 b*b - 4*a*c > 0 )。其中a,b,c由键盘输入。

#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c, d, x1, x2;
	printf("请输入a, b, c的值：\n");
	scanf("%f,%f,%f",&a, &b, &c);
	d = b * b - 4 * a * c;
	x1 = (-b + sqrt(d))/(2 * a);
	x2 = (-b - sqrt(d))/(2 * a);
	printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
}