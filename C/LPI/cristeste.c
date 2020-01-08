
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char nomeCompleto[80];
    int sobrenome,nome,i,fim,j;
    fflush(stdin);
    printf("Insira o nome completo: ");
    gets(nomeCompleto);
    fim = strlen(nomeCompleto);
    printf("%s\n",nomeCompleto);
    for(j=fim;j>0;j--){
        if(isspace(nomeCompleto[j])){
        sobrenome=j;
        break;
    }
}
printf("%i,%i",fim,sobrenome);
}
//Wallace Nascimento Ferreira