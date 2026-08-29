#include <stdio.h>

int main(void)
{
	long long n;
	int p = 1;

	scanf("%lld", &n);

	if (n < 0)
		n = -n;

	while (n > 0) 
    {
		int d = n % 10;

		if (d % 2 != 0)
			p *= d;

		n /= 10;
	}

	printf("%d", p);
    
	return 0;
}