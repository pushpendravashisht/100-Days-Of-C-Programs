#include <stdio.h>

int main() 
{
    int n, i;
    double s = 0.0;

    printf("Enter Number Of Terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        s += (double)(2 * i) / (4 * i - 1);
    }

    printf("Approximate Sum: %.2f\n", s);

    return 0;
}