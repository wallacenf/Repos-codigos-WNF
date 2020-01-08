#include <stdio.h>
#include <string.h>

void Substring(char *palavra, char *subs, int inicio, int fim)
{
    *(subs + fim) = '\0';
    subs = (subs + inicio - 1);
    printf("Substring gerada %s\n", subs);
}

void main()
{
    char string[20] = "\0", sub[20] = "\0";
    int vi, vf;
    char *pstr, *psub;
    pstr = string;
    psub = sub;
    printf("Insira a palavra: ");
    gets(string);
    strcpy(psub, pstr);
    printf("Inicio da substring: ");
    scanf("%i", &vi);
    printf("Fim da substring: ");
    scanf("%i", &vf);
    Substring(pstr, sub, vi, vf);
}