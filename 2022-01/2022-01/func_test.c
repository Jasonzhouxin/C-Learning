#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//�ж�һ�����Ƿ�Ϊ����

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int a = 0;
	printf("������>:");
	scanf("%d", &a);

	if (is_prime(a) == 1)
	{
		printf("��������\n");
	}
	else
	{
		printf("����������\n");
	}


	return 0;
}

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