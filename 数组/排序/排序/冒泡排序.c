#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort(int arr[],int sz)//数组形式
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int change = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = change;
			}
		}
		
	}
}
int main()
{
	int arr[] = { 4,2,5,3,6,9,1,7,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}