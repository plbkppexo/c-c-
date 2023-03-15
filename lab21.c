#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int i, flag = 1;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
}

int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}