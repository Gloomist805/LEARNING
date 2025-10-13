#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组类似python的列表
int main()
{
	int arr[5] = { 0,1,2,3,4 };
	int i = 0;
	while (i < 5)
	{
		printf("%d", arr[i]);
		i = i + 1;
	}
	return 0;


}