#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//"递+归"=调用自身
//1、存在限制条件使得递归停止
//2、越来越接近限制条件
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}