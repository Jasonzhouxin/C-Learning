#include<stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};

	printf("%d\n", strlen(arr1));//strlen-string length �ַ�������
	printf("%d\n", strlen(arr2));//��������ֵ

	return 0;
}

//int main()
//{
//	char arr1[] = "abc";//"abc"-'a','b','c','\0'
//	//'\0'���ַ���������־
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}