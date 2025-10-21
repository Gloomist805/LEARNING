#define _CRT_SECURE_NO_WARNINGS
//求两个整数和
#include <stdio.h>
Add(int x, int y)//求和函数
{
	return x + y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);//获取输入
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}
