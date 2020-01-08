#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, b, q, r;
    scanf("%i%i", &a, &b);

    for (r = 0; r < abs(b); ++r)
    {
        if (((a - r) % b) == 0)
        {
            q = (a - r) / b;
            break;
        }
    }
    printf("%i %i\n", q, r);
}