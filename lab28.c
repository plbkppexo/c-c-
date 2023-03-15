#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int num, n, ans;
    printf("Input n = ");
    scanf("%lld", &num);
    ans = num * num;
    n = num;
    printf("n^2 = %lld\n", ans);
    while (num != 0)
    {
        if (num % 10 != ans % 10)
        {
            return printf("No. %lld is not automorphic number.\n", n);
        }
        num /= 10;
        ans /= 10;
    }
    return printf("Yes. %lld is automorphic number.\n", n);
}