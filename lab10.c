#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[10];
    char B[10];
    char C[10];
    long int side_A, side_B, side_C;
    printf("Enter length of side A: ");
    fgets(A, 10, stdin);
    printf("Enter length of side B: ");
    fgets(B, 10, stdin);
    printf("Enter length of side C: ");
    fgets(C, 10, stdin);
    side_A = atol(A);
    side_B = atol(B);
    side_C = atol(C);
    if (side_A <= 0 || side_B <= 0 || side_C <= 0 || side_A + side_B <= side_C || side_A + side_C <= side_B || side_B + side_C <= side_A){
        printf("Triangle type is invalid.");
    } else if (side_A == side_B && side_A == side_C){
        printf("Triangle type is equilateral.");
    } else if (side_A == side_B || side_A == side_C || side_B == side_C){
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }
}