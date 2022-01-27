#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求一个整数存储在内存中二进制1的个数
int main()
{
	int num = 0;
	int count = 0;

	scanf("%d", &num);

	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//printf("%d", count);

	for (int i = 0; i < 32; i++)
	{
		if (1 == ((num>>i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}

//int main()
//{
//	//右移操作符
//	int a = -1;
//	//原码：10000000000000000000000000000001
//	//反码：11111111111111111111111111111110
//	//补码：11111111111111111111111111111111
//	//内存中存储的是补码
//
//
//	int b = a >> 1;
//
//	printf("%d", b);
//
//	return 0;
//}

//int main()
//{
//	//右移操作符
//	int a = 16;
//	//16--00000000000000000000000000010000
//
//
//	int b = a >> 1;
//
//	printf("%d", b);
//
//	return 0;
//}