#include <stdio.h>

int main(void)
{
	int n;

	long long p = 1;

    printf("Enter a value.: ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i += 2)
		p *= i;

	printf("%lld\n", p);

	return 0;
}
