//������������Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game1.h"

void menu()//��Ϸ�˵���ӡ
{
	printf("*********************************\n");
	printf("*********1.paly   0.exit*********\n");
	printf("*********************************\n");
}

void game()//��ʼ��Ϸ
{
	//��Ϸ��Ҫ�߼�����
	int ret = 0;//����Iswin()��������ֵ
	//��������
	char Board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(Board, ROW, COL);
	//��ʾ����
	DisplayBoard(Board, ROW, COL);

	while (1)
	{
		//�����
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);

		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);

		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
	}
}

void test()//��Ϸ���Գ���
{
	int input = 0;
	srand ((unsigned int) time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������룡\n");
			break;
		}

	} while (input);
}

int main()
{
	test();

	return 0;
}