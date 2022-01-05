#include<stdio.h>

//static修饰函数
extern add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}



//static修饰的全局变量问题

//int main()
//{
//	extern int g_val;//extern-申明外部符号
//
//	printf("%d", g_val);
//
//	return 0;
//}

//static修饰的局部变量问题

//void test()
//{
//	static int a = 1;//是一个静态局部变量
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