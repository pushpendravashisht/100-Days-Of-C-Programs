#include <stdio.h>

int main()
{
    int a;

    printf("Enter The Number: ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("January, 31 Days");
    }
    else if (a == 2)
    {
        printf("February, 28 Days");
    }
    else if (a == 3)
    {
        printf("March, 31 Days");
    }
    else if (a == 4)
    {
        printf("April, 30 Days");
    }
    else if (a == 5)
    {
        printf("May, 31 Days");
    }
    else if (a == 6)
    {
        printf("June, 30 Days");
    }
    else if (a == 7)
    {
        printf("July, 31 Days");
    }
    else if (a == 8)
    {
        printf("August, 31 Days");
    }
    else if (a == 9)
    {
        printf("September, 30 Days");
    }
    else if (a == 10)
    {
        printf("October, 31 Days");
    }
    else if (a == 11)
    {
        printf("November, 30 Days");
    }
    else if (a == 12)
    {
        printf("December, 31 Days");
    }
    else
    {
        printf("Invalid Month Number");
    }

    return 0;
}