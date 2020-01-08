#include <stdio.h>
#include <string.h>
void main()
{
    char crow[10];
    int soma, i = 0, a, b, c;
    soma = 0;
    while (1)
    {
        fpurge(stdin);
        a = 0;
        b = 0;
        c = 0;
        gets(crow);
        if (crow[0] == '-' || crow[0] == '*')
        {
            if (crow[0] == '*')
                a = 1;
            if (crow[1] == '*')
                b = 1;
            if (crow[2] == '*')
                c = 1;
        }
        soma += 4 * a + 2 * b + 1 * c;
        if (strcmp(crow, "caw caw") == 0)
        {
            printf("%i\n", soma);
            i++;
            soma = 0;
            if (i == 3)
                break;
        }
    }
}