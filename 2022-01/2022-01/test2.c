#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ֲ����㷨

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;

	
	while (left<=right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}

	return 0;
}

//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < size; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", i);
//			break;
//		}
//	}
//	if (i == size)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}