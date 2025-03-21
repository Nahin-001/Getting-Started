#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    printf("First number must be larger than the second\n");
    printf("Please Avoid Zero\n");
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("Addition = %d\n", sum);
    int difference = num1 - num2;
    printf("Subtraction = %d\n", difference);
    int product = num1 * num2;
    printf("Multiplication = %d\n", product);
    int division = num1/num2;
    printf("Division = %d\n", division);
    return 0;
}
