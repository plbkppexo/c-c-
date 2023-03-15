#include <stdio.h>
#include <stdlib.h>
int main()
{
    char stamp[10];
    char money[10];
    int all_stamp;
    double all_money;
    fgets(stamp, 10, stdin);
    fgets(money, 10, stdin);
    all_stamp = atoi(stamp);
    all_money = atof(money);
    if (all_stamp >= 9){
        int total_stamp = all_stamp - 9;
        int per = 40;
        double total_money = all_money - (all_money * (40.0/100));
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", total_money);
        printf("And you have %d stickers left.\n", total_stamp);   
    } else if (all_stamp >= 6){
        int total_stamp = all_stamp - 6;
        int per = 30;
        double total_money = all_money - (all_money * (30.0/100));
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", total_money);
        printf("And you have %d stickers left.\n", total_stamp); 
    } else if (all_stamp >= 3){
        int total_stamp = all_stamp - 3;
        int per = 20;
        double total_money = all_money - (all_money * (20.0/100));
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", total_money);
        printf("And you have %d stickers left.\n", total_stamp); 
    } else if (all_stamp >= 2){
        int total_stamp = all_stamp - 2;
        int per = 15;
        double total_money = all_money - (all_money * (15.0/100));
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", total_money);
        printf("And you have %d stickers left.\n", total_stamp); 
    } else if (all_stamp >= 1){
        int total_stamp = all_stamp - 1;
        int per = 10;
        double total_money = all_money - (all_money * (10.0/100));
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", total_money);
        printf("And you have %d stickers left.\n", total_stamp);
    } else {
        int per = 0;
        printf("You get %d percents discount.\n", per);
        printf("Total amount due is %.2lf Baht.\n", all_money);
        printf("And you have %d stickers left.\n", all_stamp);
    }
}