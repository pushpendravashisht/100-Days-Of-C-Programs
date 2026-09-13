#include <stdio.h>

int main()
{
    int r, c, i, j, s = 0;

    scanf("%d %d", &r, &c);

    int m[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
            s = s + m[i][j];
        }
    }

    printf("%d", s);

    return 0;
}