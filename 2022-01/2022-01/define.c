#include<stdio.h>

#define MAX 1000//define定义标识符常量

//函数定义方式
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//宏定义方式
#define MAX(X, Y) (X>Y)?X:Y

int main()
{
//	int a = MAX;
	int a = 20;
	int b = 10;
	int max = Max(a, b);
	printf("最大值为 %d\n", max);

	max = MAX(a, b);
	printf("最大值为 %d\n", max);

	return 0;
}