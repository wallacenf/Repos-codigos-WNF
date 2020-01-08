#include <stdio.h>
void main()
{
    int i, j, n, k, m[500][500];
    while (1)
    {
        scanf("%i", &n);
        k = n / 3;
        if (feof(stdin))
            break;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i + j == n - 1)
                {
                    m[i][j] = 3;
                }
                else if (i == j)
                {
                    m[i][j] = 2;
                }
                if (i >= k && i < n - k && j >= k && j < n - k)
                    m[i][j] = 1;
                if (i == j && i + j == n - 1)
                    m[i][j] = 4;
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
        printf("\n");
        // zerar matriz
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                m[i][j] = 0;
            }
        }
    }
}