#include <stdio.h>
#include <stdlib.h>

// Do the count by your function
// count target in n
unsigned long long ans(int n, unsigned long long num_ans, unsigned long long mod)
{
    if (n == 0)
    {
        return num_ans;
    }
    else
    {
        int tmp = n % 2;
        num_ans += tmp * mod;
        mod *= 10;
        n = n / 2;
        return ans(n, num_ans, mod);
    }
}
int main()
{
    char input_n[12];
    fgets(input_n, 12, stdin);

    int n;

    n = atoi(input_n);

    unsigned long long answer = ans(n, 0, 1);
    printf("%llu", answer);
}