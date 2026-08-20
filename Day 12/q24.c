#include <stdio.h>

<<<<<<< HEAD
int main(void) 
{
    int u;
    long long b;

    scanf("%d", &u);

=======
int main() 
{
    int u;
    float b = 0;
    
    printf("Enter units consumed: ");
    scanf("%d", &u);
    
>>>>>>> 333619c (Day 12)
    if (u <= 100) 
    {
        b = u * 5;
    } 
    else if (u <= 200) 
    {
<<<<<<< HEAD
        b = (100 * 5) + (u - 100) * 7;
    } 
    else if (u <= 300) {
        b = (100 * 5) + (100 * 7) + (u - 200) * 10;
    } 
    else 
    {
        b = (100 * 5) + (100 * 7) + (100 * 10)
             + (long long)(u - 300) * 12;
    }

    printf("Bill: ₹%lld\n", b);

    return 0;
}
=======
        b = (100 * 5) + ((u - 100) * 7);
    } 
    else if (u <= 300) 
    {
        b = (100 * 5) + (100 * 7) + ((u - 200) * 10);
    } 
    else 
    {
        b = (100 * 5) + (100 * 7) + (100 * 10) + ((u - 300) * 12);
    }
    
    printf("Electricity Bill: Rs. %.2f\n", b);
    
    return 0;
} 
>>>>>>> 333619c (Day 12)
