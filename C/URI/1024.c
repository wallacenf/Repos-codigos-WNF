#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char palavra[1000],passo2[1000];
    int passo1,i,j,fim,passo3,lim3,casos;
    scanf("%i\n",&casos);
    for(j=0;j<casos;j++)
    {
    gets(palavra);
    fim = strlen(palavra);
    for (i=0;i<fim;i++){
        if(isalpha(palavra[i]))
        {
        passo1 = palavra[i];
        passo1+=3;
        palavra[i]=passo1;
        }
    }
    //printf("PASSO 1: %s\n",palavra);
    strcpy(passo2,palavra);
    for (i=0;i<fim;i++){
        palavra[i]=passo2[(fim-1-i)];
    }
    //printf("PASSO 2: %s\n",palavra);

    lim3 = fim/2;
    for(i=lim3;i<fim;i++){
        passo3=palavra[i];
        passo3-=1;
        palavra[i]=passo3;
    }
    printf("%s\n",palavra);
    }
}