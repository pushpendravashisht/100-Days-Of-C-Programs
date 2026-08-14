#include <stdio.h>

int main()
{
    float p, r, t, n, a, e, i, si, ci;
    float x = 1, y = 1;

    printf("Enter The Principle Value.: ");
    scanf("%f", &p);

    printf("Enter The Rate.: ");
    scanf("%f", &r);

    printf("Enter The Time Period In Years.: ");
    scanf("%f", &t);

    printf("Enter The Number Of Times The Interest Is Compounded Per Year.: ");
    scanf("%f", &n);

    si = (p * r * t) / 100;
    y = 1 + (r / (100 * n));
    e = n * t;

    for (i = 1; i <= e; i++)
    {
        x = x * y;
    }

    a = p * x;
    ci = a - p;

    printf("\n");
    printf("Simple Interest.: %f\n", si);
    printf("Compound Interest.: %f", ci);

    return 0;
}