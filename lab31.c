#include <stdio.h>
#include <stdlib.h>
int main()  
{  
    int num, i, j = 1;
    double ans = 4;
    printf("Enter n: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++){
        j += 2;
        if (i % 2 == 0){
            ans -= 4.0/j;
        } else {
            ans += 4.0/j;
        }
    }
    printf("%.10lf", ans);
}  