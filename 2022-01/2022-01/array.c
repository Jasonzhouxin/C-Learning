#include<stdio.h>

//冒泡排序
void bubble_sort(int* arr[])
{
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[i] > arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("arr[%d][%d] = %p ", i, j, &arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

////数组在内存中是连续存放的
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int size = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//
//	for (int i = 0; i < 10; i++)//按照数组下标给数组赋值，下标从0开始
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}