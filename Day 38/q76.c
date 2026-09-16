#include <stdio.h>

int main()
{
    int r, c, i, j, s = 1;

    scanf("%d %d", &r, &c);

    int m[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    if(r != c)
    {
        s = 0;
    }
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(m[i][j] != m[j][i])
                {
                    s = 0;
                    break;
                }
            }
        }
    }

    if(s == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}