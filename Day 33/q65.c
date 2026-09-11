#include <stdio.h>

int main()
{
    int n, i, e;
    int l, h, m, in = -1;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &e);

    l = 0;
    h = n - 1;

    while(l <= h)
    {
        m = (l + h) / 2;

        if(a[m] == e)
        {
            in = m;
            break;
        }
        else if(a[m] < e)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }

    if(i != -1)
    {
        printf("Found at index %d", i);
    }
    else
    {
        printf("-1");
    }

    return 0;
}