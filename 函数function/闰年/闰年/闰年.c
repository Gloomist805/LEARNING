#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_runyear(n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_runyear(year))
		{
			printf("%d ", year);
		}
		/*if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
		}*/
		/*if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
			else if (year % 400 == 0)
			{
				printf("%d ", year);
			}
		}*/
	}
	return 0;
}