#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在60秒后关机，请输入：“我是猪” 来取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
