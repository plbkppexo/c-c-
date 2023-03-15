#include <stdio.h>
#include <stdlib.h>
int main()  
{  
    int num, i, j;
    char n[10];
    fgets(n, 10, stdin);
    num = atoi(n);
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("*");  
        }  
        printf("\n");  
    }   
}  