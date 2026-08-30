#include <stdio.h>

int f(int n) 
{
    int fa = 1;

    for (int i = 1; i <= n; i++) 
    {
        fa *= i;
    }
    return fa;
}

int main(void) 
{
    int n, t, s = 0, d;

    printf("Enter A Number: ");
    scanf("%d", &n);

    t = n;

    while (t > 0) 
    {
        d = t % 10;
        s += f(d);
        t /= 10;
    }

    if (s == n)
        printf("Strong Number\n");
    else
        printf("Not A Strong Number\n");

    return 0;
}