#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//猜数字游戏
int main()
{
	printf("**********************\n");
	printf("******1.开始游戏*******\n");
	printf("******0.退出游戏*******\n");
	printf("**********************\n");

	do
	{
		int input = 0;
		printf("请输入：1.开始游戏，0.退出游戏\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			while (1)
			{
				int ret = rand() % 40;
				int a = 0;
				printf("欢迎来到游戏，请输入您猜的数字：\n");
				scanf("%d", &a);

				if (a > ret)
				{
					printf("输入数字偏大。\n");
				}
				else if (a < ret)
				{
					printf("输入数字偏小。\n");
				}
				else
				{
					printf("恭喜你，猜中了！\n");
					break;
				}
			}

			break;
		}
		case 0:
			exit(-1);
			break;
		default:
			break;
		}
	} while ();


	return 0;
}

////二分查找法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;;
//	int k = 6;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d。", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到。\n");
//	}
//
//	return 0;
//}

////打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d * %d = %-2d ", i, j, k);//%-2d--左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////求10个整数最大值
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int max = 0;//error-arr内元素小于0时，最大值为max值
//	int max = arr[0];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	
//	for (int i = 1; i < size; i++)
//	{
//		if (arr[i] > max)
//		{
//			int temp = max;
//			max = arr[i];
//			arr[i] = temp;
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}


////计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100的和
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = - flag;
//	}
//	printf("sum = %lf", sum);
//
//	return 0;
//}

//int main()
//{
//	double i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		sum += 1 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum -= 1 / i;
//	}
//	printf("sum = %lf", sum);
//
//	return 0;
//}

////数1-100内所有出现9的数字个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}


////打印100-200间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//试除法
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

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