#include <stdio.h>

int main()
{
    int n;

    printf("Enter A Number.: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("It's Negative");
    }
    else if (n > 0)
    {
        printf("It's Positive");
    }
    else
    {
        printf("It's ZERO");
    }

    return 0;
}