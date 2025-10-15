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
		//printf("未成年\n");
	//else if (age < 28 && age >= 18)
		//printf("青年\n");
	//else if (age < 40 && age >= 28)
		//printf("中年\n");
	//else if (age < 60 && age >= 40)
		//printf("壮年\n");
	//else
		//printf("老年\n");
	//else和最近的if匹配
	//为了可读性：善用{},_,A,space

	return 0;
}