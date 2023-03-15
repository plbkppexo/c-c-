#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[5];
    fgets(n, 5, stdin);
    int x = atoi(n), num = atoi(n), ans = 0, mod = 1;
    while (x != 0)
    {
        int tmp = x % 2;
        ans += tmp * mod;
        mod *= 10;
        x = x / 2;
    }
    printf("Binary number of %d is %04d.", num, ans);
}