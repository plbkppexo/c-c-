#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    if (n <= 0 || n > 26){
    	printf("-");
    } else if (n == 1) {
    	printf("a");
    } else {
    	for (i = 97+n-1; i >= 97; i--) {
        printf("%c-", i);
        }
        for (i = 98; i <= 97+n-2; i++) {
        printf("%c-", i);
        }
        printf("%c", 97+n-1);
    }
}
