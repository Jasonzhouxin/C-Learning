#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (5 == i)
			continue;//��������ѭ��

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
//			break;//����ѭ����ѭ����ֹ
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}