#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add(int x, int y);
#define NUM 100//��ʶ������
#define ADD(x,y) ((x)+(y))//��
int main()
{
	int a = 10;
	int b = 20;
	int z = ADD(a, b);
	printf("%d\n", z);
	//register int num = 3;//�Ĵ�������
	return 0;
}