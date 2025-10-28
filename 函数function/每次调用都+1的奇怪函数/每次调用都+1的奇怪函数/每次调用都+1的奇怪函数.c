#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);//È¡µØÖ·ß÷
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}