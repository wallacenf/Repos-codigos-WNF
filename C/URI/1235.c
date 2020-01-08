#include <stdio.h>
#include <string.h>
void main(){
    char frase[100],lado1[100],lado2[100];
    int i,j,meio,k;

    fflush(stdin);
    gets(frase);
    meio = strlen(frase)*0.5;
    j=0;
    k=0;
    printf("meio = %i\n",meio);
    for (i=meio;i>0;i--){
        lado1[j]=frase[i];
        j++;
    }
    printf("i final= %i\n",i);
    for (i=strlen(frase);i>=meio;i--){
        lado2[k]=frase[i];
        k++;
    }
    printf("%s\n%s\n%s",frase,lado1,lado2);

    

}