#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char input;
	char ch;
	printf("��������������>��");
	scanf("%s", &input);

	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
		//if (input == password[])
		//{
		//	printf("��¼�ɹ���\n");
		//}
		//else
		//{
		//	printf("��¼ʧ�ܣ�\n");
		//}
	}



	return 0;
}