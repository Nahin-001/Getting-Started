#include <stdio.h>
int main ()
{
    int A, B, C;

    printf("Enter the 1st number- ");
    scanf("%d", &A);

    printf("Enter the 2nd number- ");
    scanf("%d", &B);

    printf("Enter the 3rd number- ");
    scanf("%d", &C);

    if (A > B && A > C) {
        printf("The largest number is: %d\n", A);
    } else if (B > A && B > C) {
        printf("The largest number is: %d\n", B);
    } else {
        printf("The largest number is: %d\n", C);
    }

    return 0;


}
