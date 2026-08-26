#include <stdio.h>

long long p(int b, int e) 
{
	long long r = 1;

	while (e-- > 0) 
    {
		r *= b;
	}

	return r;
}

int main(void) 
{
	long long n, o, sum = 0, t;
	int d = 0;

	scanf("%lld", &n);

	if (n < 0) 
    {
		printf("Not Armstrong");
		return 0;
	}

	o = n;
	t = n;

	if (t == 0) 
    {
		d = 1;
	} else 
    {
		while (t != 0) 
        {
			d++;
			t /= 10;
		}
	}

	t = n;
	while (t != 0) 
    {
		sum += power((int)(t % 10), d);
		t /= 10;
	}

	if (sum == o) 
    {
		printf("Armstrong");
	} else 
    {
		printf("Not Armstrong");
	}

	return 0;
}