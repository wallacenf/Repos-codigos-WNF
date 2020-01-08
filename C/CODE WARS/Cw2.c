#include <stdio.h>
#include <string.h>
char *disemvowel(const char *str)
{
    char novo[50];
    char *point;
    int i;
    point = novo;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'A' || str[i] != 'E' || str[i] != 'I' || str[i] != 'O' || str[i] != 'U' || str[i] != 'a')
        {
            novo[i] = str[i];
        }
        return novo;
    }
}
void main()
{
    char frase[50];
    fpurge(stdin);
    gets(frase);
    printf("%s", disemvowel(frase));
}
