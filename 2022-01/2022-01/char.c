#include<stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};

	printf("%d\n", strlen(arr1));//strlen-string length 字符串长度
	printf("%d\n", strlen(arr2));//结果是随机值

	return 0;
}

//int main()
//{
//	char arr1[] = "abc";//"abc"-'a','b','c','\0'
//	//'\0'是字符串结束标志
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}