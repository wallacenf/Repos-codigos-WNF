#include <stdio.h>

int get_sum(int a, int b)
{
    // Good luck
    if (b < a)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return (a + b) / 2.0 * (b - a + 1);
}

void main()
{
    int a, b;
    while (1)
    {
        scanf("%i%i", &a, &b);
        printf("soma de %i a %i = ...%i\n", a, b, get_sum(a, b));
    }
}