#include<stdio.h>

int main()
{
	int a = 10;
	printf("%p\n", &a);

	int* p = &a;//&--ȡ��ַ��pΪָ���������ű�����ַ
	printf("%p\n", p);

	*p = 20;//*--�����ò�����
	printf("%d\n", a);

	return 0;
}