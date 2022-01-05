#include<stdio.h>

int main()
{
	//int ch = getchar();//从键盘获取一个字符

	//putchar(ch);//将获取的字符打印

	//printf("%c", ch);

	int ch = 0;
	//输入CTRL+z可以获取EOF
	//EOF-end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}