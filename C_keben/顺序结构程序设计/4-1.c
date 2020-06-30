// 编程序计算半径为10的圆周长、圆面积、球表面积、球体积


#include <stdio.h>
#define PI 3.14159

void main()
{
	float r = 10.0, l,s,v_s,v;
	l = 2.0 * PI * r;
	s = PI * r * r;
	v_s = 4 * s;
	v = 4.0 * PI * r * r * r / 3.0;
	printf("周长为：%f，面积为：%f，表面积为：%f，体积为：%f", l, s, v_s, v);
}
