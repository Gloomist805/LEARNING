#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;
	//&a;//ȡ��ַ
	int* p = &a;//ָ�����
	*p = 20;
	//printf("%p\n", &a);

	char ch = "w";
	char* pc = &ch;

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));
	return 0;
}