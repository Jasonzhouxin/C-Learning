#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char input;
	char ch;
	printf("ÇëÊäÈëÄúµÄÃÜÂë>£º");
	scanf("%s", &input);

	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
		//if (input == password[])
		//{
		//	printf("µÇÂ¼³É¹¦£¡\n");
		//}
		//else
		//{
		//	printf("µÇÂ¼Ê§°Ü£¡\n");
		//}
	}



	return 0;
}