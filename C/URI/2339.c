#include <stdio.h>
void main()
{
    int p, comp, usos;
    scanf("%i%i%i", &comp, &p, &usos);
    if ((comp * usos) <= p)
        printf("S\n");
    else
    {
        printf("N\n");
    }
}