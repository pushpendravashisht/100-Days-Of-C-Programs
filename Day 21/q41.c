#include <stdio.h>

int main(void) 
{
    int n, fd, ld, d, m, s;

    printf("Enter A Number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        n = -n;
    }

    if (n < 10) 
    {
        printf("Swapped Number: %d\n", n);
        return 0;
    }

    d = 1;

    while (n / d >= 10) 
    {
        d *= 10;
    }

    fd = n / d;
    ld = n % 10;
    m = (n % d) / 10;
    s = ld * d + m * 10 + fd;

    printf("Swapped Number: %d\n", s);
    return 0;
}