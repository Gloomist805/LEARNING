#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);

	if (num % 2 == 1)
		printf("ÆæÊý\n");
	else
		printf("Å¼Êý\n");

	return 0;
}