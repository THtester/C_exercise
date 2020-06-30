// 编程序：输入半径，求对应圆周长、圆面积、球表面积、球体积。

#include <stdio.h>
#define PI 3.14159

void main()
{
	float r, l, s1, s2, v;
	printf("请输入半径：\n");
	scanf("%f", &r);
	l = 2 * PI * r;
	s1 = PI * r * r;
	s2 = 4 * PI * r * r;
	v = 4 * PI * r * r * r /3.0;
	printf("圆的半径为：r = %.2f\n", r);
	printf("圆的周长为：l = %.2f\n", l);
	printf("圆的面积为：s1 = %.2f\n", s1);
	printf("球的表面积为：s2 = %.2f\n", s2);
	printf("球的体积为：v = %.2f\n", v);
}