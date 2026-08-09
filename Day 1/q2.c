#include <stdio.h>

int main()
{
    int a, b, s, d1, d2, p;
    float q1, q2;

    printf("Enter Your 1st Number.: ");
    scanf("%d", &a);

    printf("Enter Your 2nd Number.: ");
    scanf("%d", &b);

    s = a + b;
    d1 = a - b;
    d2 = b - a;
    p = a * b;
    q1 = (float)a / b;
    q2 = (float)b / a;
    
    printf("\n");
    printf("The Sum Of %d And %d Is.: %d\n\n", a, b, s);
    printf("The Difference Between %d And %d Is.: %d\nThe Difference Between %d And %d Is.: %d\n\n", a, b, d1, b, a, d2);
    printf("The Product Of %d And %d Is.: %d\n\n", a, b, p);
    printf("The Quotient Of %d And %d Is.: %.2f\nThe Quotient Of %d And %d Is.: %.2f", a, b, q1, b, a, q2);

    return 0;
}