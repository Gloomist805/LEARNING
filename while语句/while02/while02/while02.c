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
	printf("���룺");
	scanf("%s", password);
	//getchar();//��ȡ\n
	//scanf �����ո�Ͳ�����
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("ȷ������(Y/N)��");

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