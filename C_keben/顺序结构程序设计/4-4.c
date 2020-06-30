// 编程序：用复合语句计算半径为10的圆周长、圆面积、球表面积、球体积

#include <stdio.h>
#define PI 3.14159
#define R 10.0

void main()
{
	float l, s;
	l = 2.0 * PI * R;
	s = PI * R * R;
	{
		float v_s, v;
		v_s = 4 *s;
		v = 4.0 * PI * R * R * R /3.0;
		printf("球表面积为：%.2f 球体积为：%.2f\n", v_s, v);
	}
	printf("圆周长为：%.2f 圆面积为：%.2f\n", l, s);
}
