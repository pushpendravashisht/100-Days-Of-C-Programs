#include <stdio.h>

int main()
{
    float c, f, k;

    printf("Enter The Temperature In Celsius.: ");
    scanf("%f", &c);

     f = c + 273.15;
     k = 32 + (9/5) * c;

     printf("\n");
     printf("The Temperature In Fahrenheit Is.: %f\n", f);
     printf("The Temperature In Kelvin Is.: %f", k);

     return 0;
}