#include <stdio.h>
#include <stdlib.h>

int main(){
    char str_1[7];
    char str_2[7];
    fgets(str_1, 7, stdin);
    fgets(str_2, 7, stdin);
    int num_1 = atoi(str_1);
    int num_2 = atoi(str_2);
    int number_1 = atoi(str_1);
    int number_2 = atoi(str_2);
    int GCD;
    if (number_1 > number_2){
        int i = 1;
        while (i != 0){
            i = number_1 % number_2;
            number_1 = number_2;
            number_2 = i;
        }
        GCD = number_1;
    } else {
        int i = 1;
        while (i != 0){
            i = number_2 % number_1;
            number_2 = number_1;
            number_1 = i;
        }
        GCD = number_2;
    }
    int n_1 = num_1 / GCD;
    int n_2 = num_2 / GCD;
    if (n_2 == 1){
        printf("= %d\n", n_1);
    } else {
        printf("= %d/%d\n", n_1, n_2);
    }
}