#include<stdio.h>

//���ַ�����ʽ
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
//	int* p = &a;//&--ȡ��ַ��pΪָ���������ű�����ַ
//	printf("%p\n", p);
//
//	*p = 20;//*--�����ò�����
//	printf("%d\n", a);
//
//	return 0;
//}