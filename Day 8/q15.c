#include <stdio.h>

int main()
{
    char a;
    
    printf("Enter A Value.: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("A Uppercase");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("A Lowercase");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("A Digit");
    }
    else 
    {
        printf("A Special Character");
    }

    return 0;
}