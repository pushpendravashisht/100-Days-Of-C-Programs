#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter 1st Number (A).: ");
    scanf("%f", &a);

    printf("Enter 2nd Number (B).: ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;

    printf("\n");
    printf("(A): %f\n(B): %f", a, b);

    return 0;
}