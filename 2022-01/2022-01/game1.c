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
			//打印一行数据
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割符
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

	printf("玩家走：>\n");
	printf("请输入坐标：>\n");

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
				printf("该坐标被占用！\n");
			}
		}
		else
		{
			printf("输入坐标有误，请重新输入！\n");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");

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
