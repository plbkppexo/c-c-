#include <stdio.h>
int main()
{
    float num, i;
    char s;
    printf("Initial Value: ");
    scanf("%f", &num);
    printf("\n");

    while (1)
    {
        printf("Operator: ");
        scanf("\n%c", &s);
        if (s != '+' && s != '-' && s != '*' && s != '/') {
            printf("\n");
            printf("Finish Calculation. Final Value is %.4f", num);
            break;
        }

        printf("Input Value: ");
        scanf("\n%f", &i);
        if (s == '+') {
			num += i;
			printf("Present Value is %.4f\n", num);
			printf("\n");
		} else if (s == '-') {
			num -= i;
			printf("Present Value is %.4f\n", num);
			printf("\n");
		} else if (s == '*') {
			num *= i;
			printf("Present Value is %.4f\n", num);
			printf("\n");
		} else if (s == '/') {
			num /= i;
			printf("Present Value is %.4f\n", num);
			printf("\n");
		}
    } 
}