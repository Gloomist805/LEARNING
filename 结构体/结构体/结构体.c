#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Stu//�ṹ��
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele );
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "zhangsan",20,"male","13511111111" };
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ�����.��Ա��
	print(&s);
	return 0;
}