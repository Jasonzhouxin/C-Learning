#include<stdio.h>
#include"game2.h"

void InitBoard(char board[ROW][COL], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		//printf("%d ", i);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void SetMine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	int x = rand() % row + 1;
	int y = rand() % col + 1;

	while (count)
	{
		if()
		board[x][y] = '1';
		count--;
	}

}