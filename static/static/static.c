#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add(int x, int y);
#define NUM 100//标识符常量
#define ADD(x,y) ((x)+(y))//宏
int main()
{
	int a = 10;
	int b = 20;
	int z = ADD(a, b);
	printf("%d\n", z);
	//register int num = 3;//寄存器变量
	return 0;
}