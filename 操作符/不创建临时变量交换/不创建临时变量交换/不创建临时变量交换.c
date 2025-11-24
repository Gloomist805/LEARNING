#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 3;//011   011
	int b = 5;//101   101
	a = a ^ b;//001
	b = a ^ b;//011
	a = a ^ b;//101
	return 0;
}