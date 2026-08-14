#include <stdio.h>

int main()
{
    int n;
    printf("Enter A Number.: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d Is Even", n);
    }
    else 
    {
        printf("%d Is Odd", n);
    }

    return 0;
}