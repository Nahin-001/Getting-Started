#include <stdio.h>
#include <math.h>

int main() {
    float A, square, squareRoot;


    printf("Enter a number-");
    scanf("%f", &A);


    square = A * A;
    squareRoot = sqrt(A);


    printf("Square of %f = %.2f\n", A, square);
    printf("Square root of %f = %.2f\n", A, squareRoot);

    return 0;
}
