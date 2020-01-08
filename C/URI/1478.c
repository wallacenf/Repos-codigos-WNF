#include <stdio.h>
void main()
{
    int M[100][100];
    int i, j, n;
    n = 1;
    scanf("%i", &n);
    while (n != 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i > j)
                    M[i][j] = (i + 1) - (j);
                else
                {
                    M[i][j] = (j + 1) - i;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3i", M[i][j]);
                else
                {
                    printf("%4i", M[i][j]);
                }
            }
            printf("\n");
        }
        scanf("%i", &n);
        printf("\n");
    }
}

/*
4x4
1 2 3 4  00 01 02 03
2 1 2 3  10 11 12 13
3 2 1 2  20 21 22 23
4 3 2 1  30 31 32 33
/*
1 0 = 1 2 = |2|
*/