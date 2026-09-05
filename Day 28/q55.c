#include <stdio.h>

int main()
{
    int n, i, j, p;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        p = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                p = 0;
                break;
            }
        }

        if(p == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}