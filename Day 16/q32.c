#include <stdio.h>

int main() 
{
    int n, o, r = 0, r1;

    scanf("%d", &n);
    o = n;

    while (n > 0) 
    {
        r1 = n % 10;
        r = r * 10 + r1;
        n /= 10;
    }

    if (o == r) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}