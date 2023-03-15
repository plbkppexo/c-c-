#include <stdio.h>

int main()
{
   int amount = 98;
  
    int cash_50 = 50;
    int cash_20 = 20;
    int cash_5 = 5;
    int cash_1 = 1;
    int money_50 = amount / cash_50;
    int moneyLeft_50 = amount - (money_50 * cash_50);
    int money_20 = moneyLeft_50 / cash_20;
    int moneyLeft_20 = moneyLeft_50 - (money_20 * cash_20);
    int money_5 = moneyLeft_20 / cash_5;
    int moneyLeft_5 = moneyLeft_20 - (money_5 * cash_5);
    int money_1 = moneyLeft_5;
    printf("%d: %d\n", cash_1, money_1);
    printf("%d: %d\n", cash_5, money_5);
    printf("%d: %d\n", cash_20, money_20);
    printf("%d: %d\n", cash_50, money_50);

    return 0;
}