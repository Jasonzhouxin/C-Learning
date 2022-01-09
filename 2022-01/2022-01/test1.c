#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算1！+2！+...+n!的阶乘（算法2）
int main()
{
	//int i = 0;
	int j = 0;
	int n = 0;
	int fac = 1;
	int sum = 0;
	printf("请输入n:");
	scanf("%d", &n);

	for (j = 1; j <= n; j++)
	{
		fac *= j;
		sum += fac;
	}
	printf("sum = %d", sum);

	return 0;
}


////计算1！+2！+...+n!的阶乘(算法1)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int fac = 1;
//	int sum = 0;
//	printf("请输入n:");
//	scanf("%d", &n);
//
//	for (j = 1; j <= n; j++)
//	{
//		fac = 1;
//		for (i = 1; i <= j; i++)
//		{
//			fac *= i;
//		}
//		sum += fac;
//	}
//	printf("sum = %d", sum);
//
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int fac = 1;
//	printf("请输入n:");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//	}
//	printf("fac = %d", fac);
//
//	return 0;
//}