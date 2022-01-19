#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求第n个斐波拉契数列--1,1,2,3,5,8......
//循环方式
int Fibonacci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	while(n > 2)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		n--;
	}
	return f3;
}

//递归方式
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci(n - 2) + Fibonacci(n - 1);
//}

int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入n>:");
	scanf("%d", &n);

	//TDD--测试驱动开发模式
	ret = Fibonacci(n);
	printf("%d", ret);

	return 0;
}

//求n的阶乘

////递归的方式
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}

//int factorial(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n>:");
//	scanf("%d", &n);
//
//	ret = factorial(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//编写函数，不允许创建临时变量，求字符串长度

//创建临时变量count
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////递归方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "hello world!";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//接受一个整型值（无符号），按顺序打印每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("请输入>:");
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}