#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter The Numbers.: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%f Is Largest", a);
    }
    else if (b > a && b > c)
    {
        printf("%f Is Largest", b);
    }
    
    else if (c > b && c > a)
    {
        printf("%f Is Largest", c);
    }
    else
    {
        printf("They're Same!");
    }

    return 0;
}