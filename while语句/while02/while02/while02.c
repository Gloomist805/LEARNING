#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//EOF;ctrl+z
	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);               	   
	}*/

	char password[20] = { 0 };
	printf("密码：");
	scanf("%s", password);
	//getchar();//读取\n
	//scanf 碰到空格就不读了
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("确认密码(Y/N)：");

	int ret = getchar();
	if ('Y' == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}