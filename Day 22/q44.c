#include <stdio.h>

int main() 
{
    int n;

    printf("Enter The Number Of Terms: ");
    scanf("%d", &n);
    
    double s = 0.0;
    
    for (int i = 0; i < n; i++) 
    {
        int n = 2 * i + 1;
        int d = 2 * i + 2;

        s += (double)n / d;
    }
    
    printf("Approximate Sum: %.1f\n", s);
    
    return 0;
} 