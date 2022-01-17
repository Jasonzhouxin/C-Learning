#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//写一个函数，没调用一次这个函数，就会将num的值增加1
void func(int* num)
{
	(*num)++;
}


int main()
{
	int num = 0;
	func(&num);
	func(&num);
	func(&num);


	printf("%d", num);

	return 0;
}


//写一个函数，实现整型有序数组的二分查找

//int binsearch(int arr[], int x, int sz)
//{
//	//int size = sizeof(arr) / sizeof(arr[0]);//传入的arr[]类型是指针，不能求出数组长度
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	printf("请输入要查找的数字>:");
//	scanf("%d", &k);
//
//	int ret = binsearch(arr, k, size);
//
//	if (ret == -1)
//	{
//		printf("找不到。\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d。\n", ret);
//	}
//
//	return 0;
//}



////写一个函数判断一年是不是闰年
//
//int is_leapYear(int y)
//{
//	if (y % 4 == 0 || y % 100 == 0)
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	int year = 0;
//	printf("请输入年份>:");
//	scanf("%d", &year);
//
//	if (is_leapYear(year) == 1)
//	{
//		printf("是闰年。\n");
//	}
//	else
//	{
//		printf("不是闰年。\n");
//	}
//
//	return 0;
//}

////判断一个数是否为素数
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入>:");
//	scanf("%d", &a);
//
//	if (is_prime(a) == 1)
//	{
//		printf("是素数。\n");
//	}
//	else
//	{
//		printf("不是素数。\n");
//	}
//
//
//	return 0;
//}

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