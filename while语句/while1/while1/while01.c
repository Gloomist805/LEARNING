#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//��������ѭ��ʣ�����ݣ�ֱ�ӻ�ȥ�ж�
		//break ������ֹѭ��
		printf("%d ", i);
	}
	return 0;
}