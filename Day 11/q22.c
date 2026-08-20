#include <stdio.h>

int main()
{
    float cp, sp;

    printf("Enter The Cost Price And Selling Price.: ");
    scanf("%f %f", &cp, &sp);

    if (cp < sp)
    {
        printf("Profit %f", ((sp - cp) / cp) * 100);
    }
    if (cp > sp)
    {
        printf("Loss %f", ((cp - sp) / cp) * 100);
    }
    if (cp == sp)
    {
        printf("No Profit Or Loss");
    }

    return 0;
}