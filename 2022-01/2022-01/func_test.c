#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//дһ��������û����һ������������ͻὫnum��ֵ����1
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


//дһ��������ʵ��������������Ķ��ֲ���

//int binsearch(int arr[], int x, int sz)
//{
//	//int size = sizeof(arr) / sizeof(arr[0]);//�����arr[]������ָ�룬����������鳤��
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
//	printf("������Ҫ���ҵ�����>:");
//	scanf("%d", &k);
//
//	int ret = binsearch(arr, k, size);
//
//	if (ret == -1)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d��\n", ret);
//	}
//
//	return 0;
//}



////дһ�������ж�һ���ǲ�������
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
//	printf("���������>:");
//	scanf("%d", &year);
//
//	if (is_leapYear(year) == 1)
//	{
//		printf("�����ꡣ\n");
//	}
//	else
//	{
//		printf("�������ꡣ\n");
//	}
//
//	return 0;
//}

////�ж�һ�����Ƿ�Ϊ����
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
//	printf("������>:");
//	scanf("%d", &a);
//
//	if (is_prime(a) == 1)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("����������\n");
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
//		printf("�������������\n");
//	}
//	else
//	{
//		printf("���������������\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("������>:");
//	scanf("%d", &a);
//
//	is_prime(a);
//
//	return 0;
//}