#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//��������Ϸ
int main()
{
	printf("**********************\n");
	printf("******1.��ʼ��Ϸ*******\n");
	printf("******0.�˳���Ϸ*******\n");
	printf("**********************\n");

	do
	{
		int input = 0;
		printf("�����룺1.��ʼ��Ϸ��0.�˳���Ϸ\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			while (1)
			{
				int ret = rand() % 40;
				int a = 0;
				printf("��ӭ������Ϸ�����������µ����֣�\n");
				scanf("%d", &a);

				if (a > ret)
				{
					printf("��������ƫ��\n");
				}
				else if (a < ret)
				{
					printf("��������ƫС��\n");
				}
				else
				{
					printf("��ϲ�㣬�����ˣ�\n");
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

////���ֲ��ҷ�
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
//			printf("�ҵ��ˣ��±�Ϊ%d��", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}

////��ӡ�˷��ھ���
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
//			printf("%d * %d = %-2d ", i, j, k);//%-2d--�����
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////��10���������ֵ
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int max = 0;//error-arr��Ԫ��С��0ʱ�����ֵΪmaxֵ
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


////����1/1-1/2+1/3-1/4+1/5....+1/99-1/100�ĺ�
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

////��1-100�����г���9�����ָ���
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


////��ӡ100-200�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//�Գ���
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

////��ӡ1000-2000֮�������
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
//	printf("\n����%d�����ꡣ", count);
//
//	return 0;
//}


////�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//
//	printf("����������������\n");
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



////���1-100����3�ı�������
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

//������������С��������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������ֵ��\n");
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