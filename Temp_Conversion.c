#include <stdio.h>

int main() {
    int choice;
    float temp;

    printf("Choose one:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice (1 / 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature: ");
        scanf("%f", &temp);
        printf("%f°C = %f°F\n", temp, (temp * 9 / 5) + 32);
    } else if (choice == 2) {
        printf("Enter temperature: ");
        scanf("%f", &temp);
        printf("%f°F = %f°C\n", temp, (temp - 32) * 5 / 9);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
