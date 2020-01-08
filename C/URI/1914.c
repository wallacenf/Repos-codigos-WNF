#include <stdio.h>
#include <string.h>
void main()
{
    int a, b, n;
    char nome1[50], nome2[50], bla[50];
    scanf("%i", &n);
    while (n > 0)
    {
        fpurge(stdin);
        scanf("%s %s %s %s", nome1, bla, nome2, bla);
        scanf("%i %i", &a, &b);
        //printf("%s", bla);
        if (strcmp(bla, "PAR") == 0)
        {
            if ((a + b) % 2 == 0)
                printf("%s\n", nome2);
            else
            {
                printf("%s\n", nome1);
            }
        }
        if (strcmp(bla, "IMPAR") == 0)
        {
            if ((a + b) % 2 == 0)
                printf("%s\n", nome1);
            else
            {
                printf("%s\n", nome2);
            }
        }

        n--;
    }
}