//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game1.h"

void menu()//游戏菜单打印
{
	printf("*********************************\n");
	printf("*********1.paly   0.exit*********\n");
	printf("*********************************\n");
}

void game()//开始游戏
{
	//游戏主要逻辑部分
	int ret = 0;//接收Iswin()函数返回值
	//创建棋盘
	char Board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(Board, ROW, COL);
	//显示棋盘
	DisplayBoard(Board, ROW, COL);

	while (1)
	{
		//玩家走
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);

		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
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
		printf("玩家赢。\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢。\n");
	}
	else
	{
		printf("平局。\n");
	}
}

void test()//游戏测试程序
{
	int input = 0;
	srand ((unsigned int) time(NULL));

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("三子棋游戏开始！\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}

	} while (input);
}

int main()
{
	test();

	return 0;
}