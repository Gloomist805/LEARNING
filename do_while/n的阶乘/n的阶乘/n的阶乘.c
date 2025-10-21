#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int j = 1; 
	int k = 1;
	int sum = 0;
	scanf("%d",&n);
	for (k; k <= n; k++)
	{
		for (i; i <= k; i++)
			j = j * i;
		sum = sum + j;
	}
	printf("%d\n", sum);
	return 0;
}