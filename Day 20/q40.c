#include <stdio.h>

int main(void)
{
	char b[100];

	scanf("%99s", b);

	for (int i = 0; b[i] != '\0'; i++) 
    {
		b[i] = (b[i] == '0') ? '1' : '0';
	}

	printf("%s", b);
    
	return 0;
}