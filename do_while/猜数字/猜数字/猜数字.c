#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********�����֣�********\n");
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
		printf("�£���>\n");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С�ˣ�\n");
		else if (guess > ret)
			printf("�´��ˣ�\n");
		else
		{
			printf("�¶��ˣ�����\n");
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
		printf("ѡһ����>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����sb������ˣ�\n");
			break;
		}
	} while (input);
	return 0;
}