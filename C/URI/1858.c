#include <stdio.h>

void main()
{
    int n[101], i, total, min, pos;
    min = 50;
    scanf("%i", &total);
    for (i = 0; i < total; i++)
    {
        scanf("%i", &n[i]);
        if (n[i] < min)
        {
            min = n[i];
            pos = i;
        }
    }
    printf("%i\n", pos + 1);
}