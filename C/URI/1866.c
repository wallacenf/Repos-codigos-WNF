#include <stdio.h>
void main()
{
    int soma, n, i, k;
    scanf("%i", &k);
    while (k > 0)
    {
        soma = 0;

        scanf("%i", &n);
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                soma += 1;
            else
            {
                soma -= 1;
            }
        }
        printf("%i\n", soma);
        k--;
    }
}