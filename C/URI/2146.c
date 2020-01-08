#include <stdio.h>
void main()
{
    int i;
    while (1)
    {
        scanf("%i", &i);
        if (feof(stdin))
            break;
        printf("%i\n", i - 1);
    }
}