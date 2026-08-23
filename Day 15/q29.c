#include <stdio.h>

int f(int n) 
{
    if (n <= 1) 
    {
        return 1;
    }
    return n * f(n - 1);
}

int main() 
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    
    if (n < 0) 
    {
        printf("Factorial Is Not Defined For Negative Numbers.\n");
    } else 
    {
        printf("Factorial Of %d Is %d\n", n, f(n));
    }
    
    return 0;
}