#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char dance[50];
    int mode, i;
    while (1)
    {
        fpurge(stdin);
        gets(dance);
        if (feof(stdin))
            break;
        mode = 0;
        i = 0;
        for (i = 0; i < strlen(dance); i++)
        {
            if (mode == 0 && isalpha(dance[i]))
            {
                dance[i] = toupper(dance[i]);
                mode = 1;
            }
            else if (mode == 1 && isalpha(dance[i]))
            {
                dance[i] = tolower(dance[i]);
                mode = 0;
            }
            printf("Modo: %i\n", mode);
        }
        printf("%s\n", dance);
    }
}