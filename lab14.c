#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[10];
    fgets(str, 10, stdin);
    int number = atoi(str);
    while (number > -1)
    {
        printf("%d\n", number);
        number--;
    }
}