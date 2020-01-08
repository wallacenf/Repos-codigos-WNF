#include <stdio.h>

void asterisco(int n)
{
    if (n <= 1)
        printf("*");
    else
    {
        printf("*");
        asterisco(n - 1);
    }
}

int SomaT(int n)
{
    if (n <= 1)
    {
        asterisco(n);
        return 1;
    }
    else
    {
        asterisco(n);
        printf("\n");
        return n + SomaT(n - 1);
    }
}

void main()
{
    int index;
    printf("Insira o index do numero triangular.....");
    scanf("%i", &index);
    printf("\nNumero total: %i", SomaT(index));
}