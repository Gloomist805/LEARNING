#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,8574,452110,13 };//不完全初始化，其余为0
	char ch[5];
	//类型 数组名 [元素个数](可无)
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}