#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);//ʵ��
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}