#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��һ�������洢���ڴ��ж�����1�ĸ���
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
//	//���Ʋ�����
//	int a = -1;
//	//ԭ�룺10000000000000000000000000000001
//	//���룺11111111111111111111111111111110
//	//���룺11111111111111111111111111111111
//	//�ڴ��д洢���ǲ���
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
//	//���Ʋ�����
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