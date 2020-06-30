//  利用公式计算Π=4（1-1/3+1/5-1/7+1/9...）的近似值，直到括号中最后一项的绝对值小于10^-6为止。

#include <stdio.h>
#include <math.h>
#define EPS 1E-6

void main()
{
	int sign = 1;
	float n = 1.0, t = 1.0, pi = 0.0;
	while(fabs(t) >= EPS)
	{
		pi+=t;
		n+=2;
		sign=-sign;
		t=sign/n;
	}
	printf("Pi=%.6f\n", 4*pi);
}