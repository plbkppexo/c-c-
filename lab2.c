#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;
    
    float Radius = radius*radius*radius;
    float piece = 4.0/3;
    float volume = piece*PI*Radius;
    printf("The volume of this sphere is %.2f\n", volume);

    return 0;
}