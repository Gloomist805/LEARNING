#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********猜数字！********\n");
	printf("********1 play*********\n");
	printf("********0 exit*********\n");
	printf("***********************\n");
}
void game()
{
	int guess = 0;
	//RAND_MAX;//32767
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("猜！：>\n");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了！\n");
		else if (guess > ret)
			printf("猜大了！\n");
		else
		{
			printf("猜对了！！！\n");
			break;
		}	
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("选一个：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("你是sb吗？输错了！\n");
			break;
		}
	} while (input);
	return 0;
}