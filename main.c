
#include <stdio.h>
#define PI 3.1415

int main()
{
    float r = 3.1;
    float cv = 2 * r * PI;
    float dt = PI * r * r;

    printf("\nChu vi = %10.2f \n Dien tich = %10.2f", cv, dt);

    return 0;
}

