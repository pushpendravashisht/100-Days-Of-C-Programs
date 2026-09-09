#include <stdio.h>

int main()
{
    long long n;
    int d, i, mx = 0, r = 0;
    int c[10] = {0};

    scanf("%lld", &n);

    while(n != 0)
    {
        d = n % 10;
        c[d]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(c[i] > mx)
        {
            mx = c[i];
            r = i;
        }
    }

    printf("%d", r);

    return 0;
}