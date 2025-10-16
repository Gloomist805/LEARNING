#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//跳过本次循环剩余内容，直接回去判断
		//break 永久终止循环
		printf("%d ", i);
	}
	return 0;
}