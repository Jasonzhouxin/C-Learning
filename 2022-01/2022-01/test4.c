#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char password[30] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("��������������>��");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)//�ַ����Ƚϲ�����==
		{
			printf("��¼�ɹ�!\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("����������������˳�����\n");
	}



	return 0;
}