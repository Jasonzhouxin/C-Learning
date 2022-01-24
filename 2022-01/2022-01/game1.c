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
			if (Board[x-1][y-1] == ' ')//�ж�������Ϊ��ʱд�롮*������Ϊ��ʱ��ʾ���걻ռ��
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
		x = rand() % row;//0-2���������x����
		y = rand() % col;//0-2���������y����

		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}

int is_full(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	//����������Ҳ�Ϊ��
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ')
			return Board[i][1];
	}
	//����������Ҳ�Ϊ��
	for (i = 0; i < col; i++)
	{
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[1][i] != ' ')
			return Board[1][i];
	}
	//�Խ�����Ҳ�Ϊ��
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] != ' ')
		return Board[1][1];
	if (Board[2][0] == Board[1][1] && Board[1][1] == Board[0][2] && Board[1][1] != ' ')
		return Board[1][1];
	//�ж������Ƿ�Ϊ��
	if (1 == is_full(Board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}