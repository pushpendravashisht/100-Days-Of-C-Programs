#include <stdio.h>

int main(void) 
{
    int n, i, s = 0;

    printf("Enter A Number: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Not Perfect Number\n");
        return 0;
    }

    for (i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            s += i;
        }
    }

    if (s == n) 
    {
        printf("Perfect Number\n");
    } 
    else 
    {
        printf("Not Perfect Number\n");
    }

    return 0;
}