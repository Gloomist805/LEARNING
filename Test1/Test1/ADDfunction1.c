#define _CRT_SECURE_NO_WARNINGS
//������������
#include <stdio.h>
Add(int x, int y)//��ͺ���
{
	return x + y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);//��ȡ����
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}
