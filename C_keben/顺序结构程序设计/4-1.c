// ��������뾶Ϊ10��Բ�ܳ���Բ������������������


#include <stdio.h>
#define PI 3.14159

void main()
{
	float r = 10.0, l,s,v_s,v;
	l = 2.0 * PI * r;
	s = PI * r * r;
	v_s = 4 * s;
	v = 4.0 * PI * r * r * r / 3.0;
	printf("�ܳ�Ϊ��%f�����Ϊ��%f�������Ϊ��%f�����Ϊ��%f", l, s, v_s, v);
}
