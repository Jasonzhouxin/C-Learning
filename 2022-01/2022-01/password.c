#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int ch = 0;
	int ret = 0;
	char password[50];
	printf("����������>:");

	scanf("%s", password);//�������룬�����password������
	//��������ʣһ��'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("������Y/N>:");

	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܣ�\n");
	}

	return 0;
}