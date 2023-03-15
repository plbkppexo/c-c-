#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num[10];
    fgets(num, 10, stdin);
    int n = atoi(num);
    char a;
    if (n <= 0 || n > 26)
    {
        printf("-");
    }
    else
    {
        for (int k = 1; k <= n; k++)
        {
            a = 96 + n;
            for (int c = 1; c <= n - k; c++)
            {
                printf("--");
            }
            for (int c = 1; c <= 2 * k - 1; c++)
            {
                if (c < k)
                    printf("%c-", a--);
                else if (c == k)
                    printf("%c", a);
                else
                    printf("-%c", ++a);
            }
            for (int b = 1; b <= n - k; b++)
            {
                printf("--");
            }
            printf("\n");
        }
        for (int i = n - 1; i >= 1; i--)
        {
            a = 96 + n;
            for (int j = n; j >= i; j--)
            {
                if (j != n)
                    printf("--");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (k < i)
                    printf("%c-", a--);
                else if (k == i)
                    printf("%c", a);
                else
                    printf("-%c", ++a);
            }
            for (int j = n; j >= i; j--)
            {
                if (j != n)
                    printf("--");
            }
            printf("\n");
        }
    }
}