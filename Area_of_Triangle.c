#include<stdio.h>
int main ()
{
    float Hight, Base, Area;

    printf("Please enter the base-");
    scanf("%f", &Base);

    printf("Please enter the hight-");
    scanf("%f", &Hight);

    Area= .5*Hight*Base;

    printf("The area of the triangle is: %.2f\n", Area);

    return 0;
}
