#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���n��쳲���������--1,1,2,3,5,8......
//ѭ����ʽ
int Fibonacci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	while(n > 2)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		n--;
	}
	return f3;
}

//�ݹ鷽ʽ
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci(n - 2) + Fibonacci(n - 1);
//}

int main()
{
	int n = 0;
	int ret = 0;
	printf("������n>:");
	scanf("%d", &n);

	//TDD--������������ģʽ
	ret = Fibonacci(n);
	printf("%d", ret);

	return 0;
}

//��n�Ľ׳�

////�ݹ�ķ�ʽ
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}

//int factorial(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������n>:");
//	scanf("%d", &n);
//
//	ret = factorial(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//��д����������������ʱ���������ַ�������

//������ʱ����count
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////�ݹ鷽��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "hello world!";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//����һ������ֵ���޷��ţ�����˳���ӡÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("������>:");
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}