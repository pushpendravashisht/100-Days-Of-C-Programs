#include <stdio.h>

int main()
{
    float r, c, a;
    printf("Enter The Radius Of The Circle.: ");
    scanf("%f", &r);

    c = 2 * 3.14 * r;
    a = 3.14 * r * r;

    printf("\n");
    printf("The Circumference Of The Circle Is.: %f\n", c);
    printf("The Area Of The Circle Is.: %f", a);

    return 0;
}