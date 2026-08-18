#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter The Sides Of Triangle.: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}