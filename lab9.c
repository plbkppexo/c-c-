#include <stdio.h>
#include <stdlib.h>

int main()
{
    char total_money[10];
    double tax_money_1, tax_money_2, all_tax;
    double money;
    fgets(total_money, 10, stdin);
    money = atof(total_money);
    if (money > 300000.00){
        tax_money_1 = 300000 * 5.0 / 100;
        tax_money_2 = (money - 300000) * (10.0/100);
        all_tax = tax_money_1 + tax_money_2;
        printf("%.2lf", all_tax);
    } else if (money >= 0){
        tax_money_1 = money * 5.0 / 100;
        tax_money_2 = 0;
        all_tax = tax_money_1 + tax_money_2;
        printf("%.2lf", all_tax);
    } else {
        printf("Error: Salary must be greater or equal to 0");
    }

}