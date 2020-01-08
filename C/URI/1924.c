#include <stdio.h>
void main()
{
    int i, n;
    char curso[100];
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        fpurge(stdin);
        gets(curso);
    }
    printf("Ciencia da Computacao\n");
}