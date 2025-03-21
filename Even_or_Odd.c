#include<stdio.h>

int main()
{
    int A;

    printf("Enter a Number- ");
    scanf("%d",&A);

    if(A%2==0) printf("%d is Even",A);
    else printf("%d is Odd",A);

    return 0;
}
