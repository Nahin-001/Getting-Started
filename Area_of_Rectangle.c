#include <stdio.h>

int main() {
    float A, B, area;

    printf("Enter the length of the rectangle- ");
    scanf("%f", &A);

    printf("Enter the width of the rectangle- ");
    scanf("%f", &B);

    area = A * B;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
