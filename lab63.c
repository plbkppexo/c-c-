#include <stdio.h>

struct complex
{

    float num1;
    float num2;
};

struct complex
add_complex(
    struct complex C, struct complex D)
{
    struct complex n;
    n.num1 = C.num1 + D.num1;
    n.num2 = C.num2 + D.num2;
    return n;
}

struct complex
multiply_complex(
    struct complex C, struct complex D)
{
    struct complex n;
    n.num1 = (C.num1 * D.num1) - (C.num2 * D.num2);
    n.num2 = (C.num1 * D.num2) + (C.num2 * D.num1);
    return n;
}

void print_complex(
    char s[], struct complex n)
{
    printf("%s", s);
    if (n.num1 != 0 && n.num2 == 0)
    {
        printf("%.1f\n", n.num1);
    }
    else if (n.num1 == 0 && n.num2 != 0)
    {
        printf("%.1fi\n", n.num2);
    }
    else if (n.num1 != 0 && n.num2 != 0)
    {
        if (n.num2 < 0)
        {
            float num = (n.num2 * n.num2) / (-1 * n.num2);
            printf("%.1f - %.1fi\n", n.num1, num);
        }
        else
        {
            printf("%.1f + %.1fi\n", n.num1, n.num2);
        }
    }
    else
    {
        printf("0.0\n");
    }
}

int main()
{

    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.num1, &C.num2);

    printf("Enter D: ");
    scanf("%f %f", &D.num1, &D.num2);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}