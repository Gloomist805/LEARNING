#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//float a = 7 / 2.0;//�и���������С��
	//int b = 7 % 2;//ȡģ����ֻ��Ϊ��
	//printf("%.2f\n", a);
	//printf("%d\n", b);
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40�ֽ�
	int a = 10;
	int b = 5;
	int r = a > b ? a : b;
	printf("%d\n", r);
	return 0;
}
