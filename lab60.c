#include <stdio.h>

struct vector
{
    float x;
    float y;
    float z;
};

int main()
{

    struct vector u, v;
    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);
    float p1, p2, p3;
    p1 = (u.y * v.z) - (u.z * v.y);
    p2 = (u.z * v.x) - (u.x * v.z);
    p3 = (u.x * v.y) - (u.y * v.x);
    printf("u x v = %.1f %.1f %.1f", p1, p2, p3);

    return 0;
}