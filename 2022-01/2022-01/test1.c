#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����1��+2��+...+n!�Ľ׳ˣ��㷨2��
int main()
{
	//int i = 0;
	int j = 0;
	int n = 0;
	int fac = 1;
	int sum = 0;
	printf("������n:");
	scanf("%d", &n);

	for (j = 1; j <= n; j++)
	{
		fac *= j;
		sum += fac;
	}
	printf("sum = %d", sum);

	return 0;
}


////����1��+2��+...+n!�Ľ׳�(�㷨1)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int fac = 1;
//	int sum = 0;
//	printf("������n:");
//	scanf("%d", &n);
//
//	for (j = 1; j <= n; j++)
//	{
//		fac = 1;
//		for (i = 1; i <= j; i++)
//		{
//			fac *= i;
//		}
//		sum += fac;
//	}
//	printf("sum = %d", sum);
//
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int fac = 1;
//	printf("������n:");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//	}
//	printf("fac = %d", fac);
//
//	return 0;
//}