#include <stdio.h>

int main()
{
    int n, i, e, p;

    scanf("%d", &n);

    int a[n + 1];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &e);

    p = n;

    for(i = 0; i < n; i++)
    {
        if(e < a[i])
        {
            p = i;
            break;
        }
    }

    for(i = n; i > p; i--)
    {
        a[i] = a[i - 1];
    }

    a[p] = e;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}