#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter Your 1st Number.: ");
    scanf("%d", &a);

    printf("Enter Your 2nd Number.: ");
    scanf("%d", &b);

    c = a + b;

    printf("The Sum Of %d and %d Is.: %d", a, b, c);
    
    return 0;
}