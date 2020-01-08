#include <stdio.h>
char Mudar(char Alter[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        Alter[i] = 'A';
    }
    return *Alter;
}

void main()
{
    char entrada[10];
    gets(entrada);
    printf("%c", Mudar(entrada));
}