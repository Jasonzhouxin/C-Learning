#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//��ӡ100-200�������
int main()
{
	int i = 0;
	int j = 0;
	//�Գ���
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