#include <stdio.h>

int main()
{
    int n, i, e, in = -1;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &e);

    for(i = 0; i < n; i++)
    {
        if(a[i] == e)
        {
            in = i;
            break;
        }
    }

    if(in != -1)
    {
        printf("Found at index %d", in);
    }
    else
    {
        printf("-1");
    }

    return 0;
}