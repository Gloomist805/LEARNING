#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//声明结构体类型
struct People
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;
}p3, p4;
struct People p5, p6;
struct St
{
	struct People p2;
	int num;
	float f;
};
void print2(struct People* sp)
{
	//结构体指针->成员变量
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->height);
};
void print1(struct People p)
{
	//结构体变量.成员变量
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);
}
int main()
{ 
	struct People p1 = { "komedazzz","12345677456","男", 178};//结构体变量p1创建
	struct St s = { {"吴东彦","12345689874","男",171},1111,2.58f};
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);//结构体变量.成员变量
	printf("%s %s %s %d %d %f\n", s.p2.name, s.p2.tele, s.p2.sex, s.p2.height, s.num, s.f);
	print1(p1);//传结构体
	print2(&p1);//传地址更好
	return 0;
} 