#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	//数组名=首元素地址
	int n = sizeof(arr);
	printf("%d\n", n);
	//but   
	//1、sizeof(数组名)表示整个数组大小（byte）
	//2、&数组名，取出整个数组地址
	return 0;
}