#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_max(int x, int y)
{
	return (x > y ? x : y);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = get_max(a, b);
	printf("%d\n", m);
	return 0;
}