#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int m, n, a, b = 1;
    scanf("%d,%d", &m, &n);
    if (m > n)
    {
        a = m;
        m = n;
        n = a;
    }
    if (m <= 9999 && n <= 9999 && m >= 1 && n >= 1)
    {
        for (int i = m; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                    sum += j;
            }
            if (sum == i)
                if (b)
                {
                    printf("%d", i);
                    b = 0;
                }
                else
                    printf(",%d", i);
        }
    }
    else
        printf("error");

    return 0;
}