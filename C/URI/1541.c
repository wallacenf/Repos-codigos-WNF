#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int lado1, lado2, perc, side, area;
    while (1)
    {
        scanf("%i%i%i", &lado1, &lado2, &perc);
        if (lado1 == 0)
            break;
        area = sqrt(lado1 * lado2 * 100 / perc);
        printf("%i\n", area);
    }
}