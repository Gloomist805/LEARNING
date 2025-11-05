#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int n)
{
	if (n > 1)
	{
		return n * fac(n - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ans = fac(a);
	printf("%d\n", ans);
	return 0;
}