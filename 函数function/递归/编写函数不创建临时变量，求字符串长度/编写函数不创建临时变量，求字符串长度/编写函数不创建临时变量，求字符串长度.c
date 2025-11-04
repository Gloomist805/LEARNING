#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Ä£Äâstrlen
//int strlen2(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int strlen2(char* str)
{
	if (*str != '\0')
	{
		return 1 + strlen2(str + 1);
	}
	else
	{
		return 0;
	}

}
int main()
{
	char arr[] = "qwer";
	int len = strlen2(arr);
	printf("%d\n", len);
	return 0;
}