#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("***     M E N U    ***\n");
	printf("******  1. play  *****\n");
	printf("******  0. exit  *****\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
	char show[ROWS][COLS] = {0};//存放排查出的雷的信息
	//初始化 mine为0 show为*
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//埋雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	//随机数生成
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("扫雷\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("你输了个啥？？？\n");
			break;
		}
	} while (input);
	return 0;
}