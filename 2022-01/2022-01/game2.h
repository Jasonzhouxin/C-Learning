#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col, char set);
void DisplayBoard(char board[ROW][COL], int row, int col);
void SetMine(char board[ROW][COL], int row, int col);