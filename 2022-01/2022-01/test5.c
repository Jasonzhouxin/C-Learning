#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//打印100-200间的素数
int main()
{
	int i = 0;
	int j = 0;
	//试除法
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}

////打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year%400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\n共有%d个闰年。", count);
//
//	return 0;
//}


////求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &m, &n);
//
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", r);
//
//	return 0;
//}



////输出1-100所有3的倍数数字
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//}

//输入三个数从小到大排列

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数值：\n");
//	scanf("%d%d%d",&a, &b, &c);
//
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}