#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//可以嵌套调用，不能嵌套定义
#include <string.h>
int main()
{
	//int len = strlen("qwerty");
	//printf("%d\n", len);
	////链式访问
	//printf("%d\n", strlen("qwerty"));
	printf("%d", printf("%d", printf("%d", 43)));
	//printf返回字符个数
	return 0;
}