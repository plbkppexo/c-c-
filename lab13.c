#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char size_str[4], pepperoni_str[4], cheese_str[4], mushroom_str[4];
    int size, pepperoni, cheese, mushroom, diameter;
    float extracost_pepperoni, extracost_cheese, extracost_mushroom;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 4, stdin);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 4, stdin);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 4, stdin);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 4, stdin);

    size = atoi(size_str);
    pepperoni = atoi(pepperoni_str);
    cheese = atoi(cheese_str);
    mushroom = atoi(mushroom_str);

    if (size == 1){
        diameter = 10;
    } else if (size == 2){
        diameter = 16;
    } else {
        diameter = 20;
    }

    if (pepperoni == 0){
        extracost_pepperoni = 0;
    } else {
        extracost_pepperoni = 0.5;
    }

    if (cheese == 0){
        extracost_cheese = 0;
    } else {
        extracost_cheese = 0.25;
    }
    
    if (mushroom == 0){
        extracost_mushroom = 0;
    } else {
        extracost_mushroom = 0.3;
    }

    int fixedcost = 5;
    int basecost = 2;
    float extracost = extracost_pepperoni + extracost_cheese + extracost_mushroom;
    float area = M_PI * ((diameter * diameter) / 4.0);
    float cost = fixedcost + (basecost * area) + (extracost * area);
    float price = 1.5 * cost;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
}