//  从键盘上输入若干员工的工资，统计并输出最高工资和最低工资，当输入负数时结束循环。

#include <stdio.h>

void main()
{
	float x, max, min;
	printf("请输入员工的工资：\n");
	scanf("%f", &x);
	max=min=x;
	while(x >= 0.0)
	{
		if (x > max)
			max = x;
		if (x < min)
			min = x;
		printf("请输入员工的工资：\n");
		scanf("%f", &x);
	}
	printf("max = %f, min = %f\n", max, min);
}