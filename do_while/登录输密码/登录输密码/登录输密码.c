#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("�����룺>");
		scanf("%s", password);
		if (strcmp(password, "123qwe") == 0)
		{
			printf("��¼�ɹ�����\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		{
			printf("���δ��󣬹���\n");
		}
	return 0; 
}