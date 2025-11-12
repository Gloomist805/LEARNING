#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("********* 三子棋 *********\n");
	printf("**************************\n");
	printf("******1.play   0.exit*****\n");
	printf("**************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	while(1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		ret = IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了！nice!\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！你是人类啊？\n");
	}
	else
	{
		printf("平局!再来一把呗！\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));//设置随机数生成起点
	int input = 0;
	do
	{
		menu();                      //输出菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)               //选择
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("别乱输喵！\n");
			break;
		}
	} while (input);
	return 0;
}