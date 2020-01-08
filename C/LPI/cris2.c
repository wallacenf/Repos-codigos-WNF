#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char palavra[47],letra;
    int numLetra=0,i;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("Escolha uma letra para a contagem: ");
    scanf(" %c",&letra);
    for (i=0;i<(strlen(palavra));i++){
        if (palavra[i]==toupper(letra) || palavra[i]==tolower(letra))
        numLetra++;
    }
    printf("Existe %i letras '%c' na palavra '%s'\n",numLetra,letra,palavra);

}