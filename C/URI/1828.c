#include <stdio.h>
#include <string.h>

void main()
{
    int n, caso, result;
    char sheldon[50], raj[50];
    scanf("%i", &n);
    caso = 0;
    while (n > 0)

    {
        caso++;
        fpurge(stdin);
        scanf("%s %s", &sheldon, &raj);

        if (strcmp(sheldon, "papel") == 0)
        {
            if (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)
                result = 1;
            else
                result = 2;
        }
        if (strcmp(sheldon, "tesoura") == 0)
        {
            if (strcmp(raj, "lagarto") == 0 || strcmp(raj, "papel") == 0)
                result = 1;
            else
                result = 2;
        }
        if (strcmp(sheldon, "pedra") == 0)
        {
            if (strcmp(raj, "lagarto") == 0 || strcmp(raj, "tesoura") == 0)
                result = 1;
            else
                result = 2;
        }
        if (strcmp(sheldon, "lagarto") == 0)
        {
            if (strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0)
                result = 1;
            else
                result = 2;
        }

        if (strcmp(sheldon, "Spock") == 0)
        {
            if (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0)
                result = 1;
            else
                result = 2;
        }
        if (strcmp(raj, sheldon) == 0)
            result = 3;
        if (result == 1)
            printf("Caso #%i: Bazinga!\n", caso);
        if (result == 2)
            printf("Caso #%i: Raj trapaceou!\n", caso);
        if (result == 3)
            printf("Caso #%i: De novo!\n", caso);
        n--;
    }
}