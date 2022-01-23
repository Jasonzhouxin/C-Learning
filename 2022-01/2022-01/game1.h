#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char Board[ROW][COL], int row, int col);
void DisplayBoard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
