#include <stdio.h>
void main()
{
    int i, j, n;
    int m[70][70];
    while (1)
    {
        scanf("%i", &n);
        if (feof(stdin))
            break;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ((i + j) == (n - 1))
                    m[i][j] = 2;
                else if (i == j)
                    m[i][j] = 1;
                else
                {
                    m[i][j] = 3;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%i", m[i][j]);
            }
            printf("\n");
        }
    }
}

/*
4x4
	
1 3 3 2  00 01 02 03
3 1 2 3  10 11 12 13
3 2 1 3  20 21 22 23
2 3 3 1  30 31 32 33
*/