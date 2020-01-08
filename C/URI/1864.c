#include <stdio.h>

void main()
{
    char frase[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int i, n;
    scanf("%i", &n);
    for (i = 0; i < n; i++)
        printf("%c", frase[i]);
    printf("\n");
}