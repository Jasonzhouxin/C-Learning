#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印乘法口诀表
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	print_table(n);

	return 0;
}

////打印二进制的奇数位和偶数位
//void Print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Print(n);
//
//	return 0;
//}


//求二进制中不同位的个数
//count_bit_diff(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//}
//
//
////count_bit_diff(int m, int n)
////{
////	int tmp = m ^ n;
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((tmp >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,&n);
//
//	int count = count_bit_diff(m, n);
//
//	printf("%d\n", count);
//
//	return 0;
//}
//
////写一个函数求a的二进制（补码）表示中有几个1
//count_bit_one(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//count_bit_one(unsigned int n)//函数形参接收无符号整型数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int count = count_bit_one(a);
//
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	short* p = (short*)&a;
//
//	*p = 0;
//
//	printf("%x", a);
//
//}

////交换两个数组
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int temp = 0;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
////	init(arr, sz);
//	Print(arr, sz);
//	reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}