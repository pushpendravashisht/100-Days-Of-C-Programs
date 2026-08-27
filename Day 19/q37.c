#include <stdio.h>

int main()
{
    int a, b, n;

    scanf("%d %d", &a, &b);

    n = (a > b) ? a : b;
    while (n % a != 0 || n % b != 0)
        n++;

    printf("%d", n);

    return 0;
}