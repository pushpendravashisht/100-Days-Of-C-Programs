#include <stdio.h>

int main()
{
    float n;

    printf("Enter Your Percentage.: ");
    scanf("%f", &n);

    if (n >= 0 && n < 60)
    {
        printf("Grade F");
    }
    else if (n >= 60 && n <= 69)
    {
        printf("Grade D");
    }
    else if (n > 69 && n <= 79)
    {
        printf("Grade C");
    }
    else if (n > 79 && n <= 89)
    {
        printf("Grade B");
    }
    else if (n > 89 && n <= 100)
    {
        printf("Grade A");
    }
    else
    {
        printf("Not A True Percentage");
    }

    return 0;
}