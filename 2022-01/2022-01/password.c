#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int ch = 0;
	int ret = 0;
	char password[50];
	printf("请输入密码>:");

	scanf("%s", password);//输入密码，存放在password数组中
	//缓冲区还剩一个'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请输入Y/N>:");

	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("确认失败！\n");
	}

	return 0;
}