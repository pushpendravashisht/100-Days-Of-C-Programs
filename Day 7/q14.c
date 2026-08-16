#include <stdio.h>

int main()
{
    char a;

    printf("Enter Any Alphabet.: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("It's A Vowel");
    }
    else
    {
        printf("It's A Consonant");
    }

    return 0;
}