#include <stdio.h>
int main()
{
    int choice;
    float value, convertedValue;

    printf("Choose 1 / 2\n");
    printf("1. Inches to Centimeters\n");
    printf("2. Centimeters to Inches\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);\

    if (choice == 1){
        printf("Enter length in Inches-");
        scanf("%f", &value);
        convertedValue = value * 2.54;
        printf("%.2f inches = %.2f centimeters\n", value, convertedValue);


    }
    else if (choice == 2) {
        printf("Enter length in centimeters: ");
        scanf("%f", &value);
        convertedValue = value * printf("%.2f inches = %.2f centimeters\n", value, convertedValue); ;
        printf("%.2f centimeters = %.2f inches\n", value, convertedValue);
    }
    else {
        printf("Invalid choice!!! Please select 1 or 2.\n");

    }

    return 0;

}
