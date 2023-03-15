#include <stdio.h>
#include <stdlib.h>
int main()  
{  
    int num, i, j;
    printf("Enter n: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            if (j % 2 == 0) printf("x");  
			else printf("-");
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            if (j % 2 == 0) printf("x");  
			else printf("-");  
        }  
        printf("\n");  
    }   
}  