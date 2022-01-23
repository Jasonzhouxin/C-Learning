#define _CRT_SECURE_NO_WARNINGS 1
#include"game1.h"

void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡһ������
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ��
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("����ߣ�>\n");
	printf("���������꣺>\n");

	while (1)
	{
		scanf("%d %d", &x, &y);
		if ((x >= 0 && x <= row) && (y >= 0 && y <= col))
		{
			if (Board[x-1][y-1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�\n");
			}
		}
		else
		{
			printf("���������������������룡\n");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (Board[x - 1][y - 1] == ' ')
		{
			Board[x - 1][y - 1] = '#';
			break;
		}
	}
}
