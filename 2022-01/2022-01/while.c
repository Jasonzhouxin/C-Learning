#include<stdio.h>

int main()
{
	//int ch = getchar();//�Ӽ��̻�ȡһ���ַ�

	//putchar(ch);//����ȡ���ַ���ӡ

	//printf("%c", ch);

	int ch = 0;
	//����CTRL+z���Ի�ȡEOF
	//EOF-end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}