#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//判断一个数是否为素数

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int a = 0;
	printf("请输入>:");
	scanf("%d", &a);

	if (is_prime(a) == 1)
	{
		printf("是素数。\n");
	}
	else
	{
		printf("不是素数。\n");
	}


	return 0;
}

//void is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= x; i++)
//	{
//		if (x%i == 0)
//		{
//			break;
//		}
//	}
//	if (x <= i)
//	{
//		printf("这个数是素数。\n");
//	}
//	else
//	{
//		printf("这个数不是素数。\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入>:");
//	scanf("%d", &a);
//
//	is_prime(a);
//
//	return 0;
//}