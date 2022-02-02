#include<stdio.h>

//求字符串格式
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return  end - start;
}

int main()
{
	char arr[] = "bit";

	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//	int* p = &a;//&--取地址；p为指针变量，存放变量地址
//	printf("%p\n", p);
//
//	*p = 20;//*--解引用操作符
//	printf("%d\n", a);
//
//	return 0;
//}