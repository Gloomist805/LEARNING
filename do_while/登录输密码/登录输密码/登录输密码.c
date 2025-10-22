#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÊäÃÜÂë£º>");
		scanf("%s", password);
		if (strcmp(password, "123qwe") == 0)
		{
			printf("µÇÂ¼³É¹¦£¡£¡\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	if (i == 3)
		{
			printf("Èı´Î´íÎó£¬¹ö£¡\n");
		}
	return 0; 
}