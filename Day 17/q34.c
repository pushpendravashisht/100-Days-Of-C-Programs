#include <stdio.h>

int main(void)
{
	int n, p = 1;

	scanf("%d", &n);

	if (n < 2) 
    
    {
		p = 0;
	} else {
		for (int d = 2; d <= n / d; d++) 
        {
			if (n % d == 0) 
            {
				p = 0;
				break;
			}
		}
	}

	printf(p ? "Prime\n" : "Not prime\n");
	return 0;
}