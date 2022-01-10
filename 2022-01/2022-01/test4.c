#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char password[30] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入您的密码>：");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)//字符串比较不能用==
		{
			printf("登录成功!\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码输入错误，退出程序！\n");
	}



	return 0;
}