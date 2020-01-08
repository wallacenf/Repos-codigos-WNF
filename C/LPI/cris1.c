#include <stdio.h>
#include <string.h>
void main(){
    int i,tamanho,vogais=0;
    char palavra[47],letra;
    printf("Insira uma palavra: ");
    scanf("%s",palavra);
    strupr(palavra);
    tamanho = strlen(palavra);
    
    for(i=0;i<tamanho;i++){
        if(palavra[i]=='A' || palavra[i]=='E' || palavra[i]=='I' || palavra[i]=='O' || palavra[i]=='U')
        vogais++;
       }
        printf("A palavra informada possui %i vogais.\n",vogais);
        printf("Insira uma letra para substituir as vogais: ");
        scanf(" %c",&letra);
        for(i=0;i<tamanho;i++){
        if(palavra[i]=='A' || palavra[i]=='E' || palavra[i]=='I' || palavra[i]=='O' || palavra[i]=='U')
        palavra[i]=letra;
       }
       printf("Palavra substituida: %s",palavra);



}