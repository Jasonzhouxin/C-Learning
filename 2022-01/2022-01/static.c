#include<stdio.h>

//static���κ���
extern add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}



//static���ε�ȫ�ֱ�������

//int main()
//{
//	extern int g_val;//extern-�����ⲿ����
//
//	printf("%d", g_val);
//
//	return 0;
//}

//static���εľֲ���������

//void test()
//{
//	static int a = 1;//��һ����̬�ֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}