#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//memset--�ڴ����ú���

int main()
{
	char arr[] = "hello world!";
	memset(arr, '*', 3);
	printf("%s\n", arr);


	return 0;
}

//strcpy--�ַ�����������

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}