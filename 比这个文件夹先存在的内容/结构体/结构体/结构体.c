#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Stu//结构体
{
	//成员
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
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员名
	print(&s);
	return 0;
}