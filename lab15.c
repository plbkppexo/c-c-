#include <stdio.h>
#include <stdlib.h>

int main(){
    char str_1[12];
    char str_2[12];
    fgets(str_1, 12, stdin);
    fgets(str_2, 12, stdin);
    long long num_1 = atoll(str_1);
    long long num_2 = atoll(str_2);
    long long number_1 = atoll(str_1);
    long long number_2 = atoll(str_2);
    long long GCD;
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
    long long LCM = (num_1 * num_2) / GCD;
    printf("GCD: %lld\n", GCD);
    printf("LCM: %lld\n", LCM);
}