#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int alpha, num;
    scanf("%d", &alpha);
    scanf("%d", &num);
    char str[num][alpha + 1];
    int i, j, k;
    for (i = 0; i < num; i++) {
        scanf("%s", str[i]);
    }
    char ans[alpha + 1];
    strcpy(ans, str[0]);
    for (i = 0; i < num; i++) {
        k = 0;
        for (j = 0; j < alpha; j++) {
            if (ans[j] != str[i][j]) {
                k++;
            }
        }
        if (k < 3) {
            strcpy(ans, str[i]);
        } else {
            break;
        }
    }
    printf("%s", ans);
}