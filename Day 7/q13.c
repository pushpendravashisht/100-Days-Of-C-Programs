#include <stdio.h>

int main()
{
    int n;

    printf("Enter The Year.: ");
    scanf("%d", &n);

    if (n % 400 == 0)
    {
        printf("Leap Year");
    }
    else if (n % 100 == 0)
    {
        printf("Not A Leap Year");
    }
    else if (n % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not A Leap Year");
    }

    return 0;
}