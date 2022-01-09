#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binsearch(int x, int v[], int n)
{
	for (int i = 0; i < x; i++)
	{
		if (n == v[i])
		{
			printf("%d", i);
		}
	}
}

int main()
{
	int arr[10] = {0};
	printf("请输入数组元素:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//printf("%d",arr[4]);
	binsearch(10, arr[], 4);

	return 0;
}