#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (5 == i)
			continue;//调出本次循环

		printf("%d ", i);
	}

	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			break;//跳出循环，循环终止
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}