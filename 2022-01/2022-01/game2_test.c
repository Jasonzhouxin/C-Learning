#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game2.h"

void menu()
{
	printf("*******************************\n");
	printf("*********  1. play  ***********\n");
	printf("*********  0. exit  ***********\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROW][COL] = { 0 };

	InitBoard(mine, ROWS, COLS, '*');
	InitBoard(show, ROW, COL, '0');

	DisplayBoard(mine, ROWS, COLS);
	DisplayBoard(show, ROW, COL);

	SetMine(show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}

