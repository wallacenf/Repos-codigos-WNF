#include <stdio.h>
void main()
{
    int a, b, c, h;
    scanf("%i%i%i", &a, &b, &c);
    if (b < a && c >= b)
        h = 1;
    if (a < b && b >= c)
        h = 2;
    if (b > a && c > b && (c - b) < (b - a))
        h = 2;
    if (b > a && c > b && (c - b) >= (b - a))
        h = 1;
    if (a > b && b > c && (b - c) < (a - b))
        h = 1;
    if (a > b && b > c && (b - c) >= (a - b))
        h = 2;
    if (a == b && c > b)
        h = 1;
    if (a == b && c < b)
        h = 2;
    if (a == b && b == c)
        h = 2;

    if (h == 1)
        printf(":)\n");
    if (h == 2)
        printf(":(\n");
}

//h1 :) h2 :(