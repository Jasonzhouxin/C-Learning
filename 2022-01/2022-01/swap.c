#include<stdio.h>
#include<limits.h>

#define INT_MAX 2147483647

int main()
{
	int a = 3;
	int b = 5;

	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a ^ b;//^��������λ�����ͬλ0������λ1
	b = a ^ b;
	a = a ^ b;

	printf("������a=%d b=%d\n", a, b);

	return 0;
}