#include <stdio.h>

int main()
{
    int n, i, l, s;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    l = a[0];
    s = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > l)
        {
            s = l;
            l = a[i];
        }
        else if(a[i] > s && a[i] != l)
        {
            s = a[i];
        }
    }

    printf("%d", s);

    return 0;
}