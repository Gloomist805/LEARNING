#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int sum1 = Add(a, b);
	printf("%d + %d = %d\n", a, b, sum1);
	int sum2 = Sub(a, b);
	printf("%d - %d = %d\n", a, b, sum2);
	int sum3 = Mul(a, b);
	printf("%d * %d = %d\n", a, b, sum3);
	float sum4 = Div(a, b);
	printf("%d / %d = %.2f\n", a, b, sum4);
	//人有时候真的会被自己蠢到
	return 0;
}

