#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//int arr1[2][4] = { {1,2},{3,4},{5,6},{7,8} };
	//char arr2[2][3];
	//int arr3[][3] = { {1,2,3},{4,5,6},{7,8,9} };//可省略行，不可省略列

	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++) 
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}