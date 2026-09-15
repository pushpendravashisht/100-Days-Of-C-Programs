#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int m[r][c];
    int s[r];

    for(i = 0; i < r; i++)
    {
        s[i] = 0;

        for(j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
            s[i] = s[i] + m[i][j];
        }
    }

    for(i = 0; i < r; i++)
    {
        printf("%d ", s[i]);
    }

    return 0;
}