#include<stdio.h>

//ð������
void bubble_sort(int* arr, int sz)
{
	//ȷ��ð����������
	int i = 0;
	int j = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������������������Ѿ�����

		//ÿһ��ð������
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//�����������ݲ���ȫ����
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int i = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

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

////�������ڴ�����������ŵ�
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
//	int size = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//
//	for (int i = 0; i < 10; i++)//���������±�����鸳ֵ���±��0��ʼ
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