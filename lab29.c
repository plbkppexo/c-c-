#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int num, i, a, b, c, ans = 0;
	scanf("%d/n", &num);
	for (a = 1; a < num / 2; a++){
		for (b = 2; b < num / 2; b++){
			c = sqrt((a*a) + (b*b));
			if (a+b+c == num && a*a + b*b == c*c & a < b){
				printf("(%d, %d, %d)\n", a, b, c);
				ans = 1;
			}
		}
	}
	if (ans == 0){
		printf("No triple found.\n");
	}
}