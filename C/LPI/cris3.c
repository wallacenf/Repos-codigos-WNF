#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char nomeCompleto[80];
    int sobrenome,nome,i,j,fim;
    printf("Insira o nome completo: ");
    gets(nomeCompleto);
    fim = strlen(nomeCompleto);
    
    //Determinar o fim do primeiro nome e o inicio do sobrenome por meio da função isspace()
    for (i=0;i<fim;i++){
        if(isspace(nomeCompleto[i])){
            nome=i;
        break;
        }
    }
    for (j=fim;j>0;j--){
        if(isspace(nomeCompleto[j])){
            sobrenome=j;
        break;
        }
    }
    //imprimir letra a letra a partir dos indice obtidos pelos for's anteriores
    for(j=sobrenome;j<fim;j++){
        printf("%c",nomeCompleto[j]);
    }
    printf(", ");
    for(i=0;i<nome;i++){
        printf("%c",nomeCompleto[i]);
    }

    
}
