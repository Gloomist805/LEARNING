#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
test()
{
	int a = 4;
	if (a == 3)
		return 1;
	else
		return 0;
}
int main()
{
	int r = test();
	printf("%d\n", r);

	//int age = 30;
	//if (age < 18)
		//printf("δ����\n");
	//else if (age < 28 && age >= 18)
		//printf("����\n");
	//else if (age < 40 && age >= 28)
		//printf("����\n");
	//else if (age < 60 && age >= 40)
		//printf("׳��\n");
	//else
		//printf("����\n");
	//else�������ifƥ��
	//Ϊ�˿ɶ��ԣ�����{},_,A,space

	return 0;
}