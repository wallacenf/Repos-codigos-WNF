#include <stdio.h>
#include <string.h>
void Revert(char *frase){
    char inv[30];
    int i,j;
    j=0;
    for (i=strlen(frase)-1;i>=0;i--){
        *(inv+j)=*(frase+i);
        j++;
    }
    for (i=0;i<strlen(inv);i++){
        if (*(inv+i)!='A' && *(inv+i)!='E' && *(inv+i)!='I' && *(inv+i)!='O' && *(inv+i)!='U' && *(inv+i)!=' ' )
        *(inv+i)='#';
    }
    printf("Frase inserida: %s\nFrase Manipulada: %s\n",frase,inv);
}

void main(){
    char string[30],*pstr;
    pstr=string;
    printf("Insira uma frase:");
    gets(string);
    Revert(pstr);
}