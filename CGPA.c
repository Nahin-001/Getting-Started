#include<stdio.h>

int main()
{
    int mark;

    printf("Enter your subject marks- ");
    scanf("%d", &mark);

    if (mark >= 80)
    { printf("Your CGPA is 4.00 (A+)"); }

    else if (mark >= 75 && mark < 80)
    { printf("Your CGPA is 3.75 (A)"); }

    else if (mark >= 70 && mark < 75)
    { printf("Your CGPA is 3.50 (A-)"); }

    else if (mark >= 65 && mark < 70)
    { printf("Your CGPA is 3.25 (B+)"); }

    else if (mark >= 60 && mark < 65)
    { printf("Your CGPA is 3.00 (B)"); }

    else if (mark >= 55 && mark < 60)
    { printf("Your CGPA is 2.75 (B-)"); }

    else if (mark >= 50 && mark < 55)
    { printf("Your CGPA is 2.50 (C+)"); }

    else if (mark >= 45 && mark < 50)
    { printf("Your CGPA is 2.25 (C)"); }

    else if (mark >= 40 && mark < 45)
    { printf("Your CGPA is 2.00 (D)"); }

    else if (mark >= 0 && mark < 40)
    { printf("Your CGPA is 0.00 (F)"); }

    return 0;
}
