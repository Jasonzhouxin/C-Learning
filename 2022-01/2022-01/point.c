#include<stdio.h>

int main()
{
	int a = 10;
	printf("%p\n", &a);

	int* p = &a;//&--取地址；p为指针变量，存放变量地址
	printf("%p\n", p);

	*p = 20;//*--解引用操作符
	printf("%d\n", a);

	return 0;
}