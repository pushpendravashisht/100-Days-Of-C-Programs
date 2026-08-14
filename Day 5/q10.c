#include <stdio.h>

int main()
{
    int a, h, m, s;

    printf("Enter The Time In Seconds.: ");
    scanf("%d", &a);

    h = a / 3600;
    a = a % 3600;
    m = a / 60;
    s = a % 60;

    printf("\n");
    printf("%d:%d:%d", h, m, s);

    return 0;
}