#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4,5,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;

	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("The single number is %d\n", ret);



	//��ʽ1
	//for (i = 0; i < sz; i++)
	//{
	//	int count = 0;//��������ע�����λ��

	//	for (int j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (1 == count)
	//	{
	//		printf("The single number is %d\n", arr[i]);
	//		break;
	//	}

	//}

	return 0;
}