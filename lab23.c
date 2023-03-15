#include <stdio.h>
#include <stdlib.h>
int main()  
{  
	char wide[10],high[10];
	fgets(wide, 10, stdin);
	fgets(high, 10, stdin);
    int i,j,k,n,m;
    n = atoi(wide);
    m = atoi(high);
    for(i=1;i<=m;i++)  
    {  
        for(j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(k=1;k<=n;k++)  
        {  
         if(i==1 || i==m || k==1 || k==n)  
           printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }    
}  