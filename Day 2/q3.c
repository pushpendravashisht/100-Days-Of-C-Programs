#include <stdio.h>

int main()
{
    float l, b, p, a;
    
    printf("Enter The Lenght Of The Rectangle.: ");
    scanf("%f", &l);

    printf("Enter The Breadth Of The Rectangle.: ");
    scanf("%f", &b);

    p = 2 * (l + b);
    a = l * b;

    printf("\n");
    printf("The Perimeter Of The Rectangle Is.: %f\n", p);
    printf("The Area Of The Rectangle Is.: %f", a);

    return 0;
}