#include <stdio.h>

int main()
{
    int n, i;
    int p = 1;

    printf("Enter a value.: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        p *= i;
    }

    printf("%d", p);
    
    return 0;
}