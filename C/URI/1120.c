#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char digitado[1000],numeros[1000],quebrada;
    int i,w=0,fim;
    unsigned long long int final;
    while(1){
    fflush(stdin);
    scanf(" %c",&quebrada);
    scanf("%s",digitado);
    fim = strlen(digitado);
    if (quebrada=='0' && digitado[0]=='0') break;
    for (i=0;i<fim;i++){
        if (digitado[i]==quebrada){
        digitado[i]='x';
        }
    }
    for(i=0;i<fim;i++){
        if(digitado[i]!='x'){
            numeros[w]=digitado[i];
            w++;
        }
    }
    final = atoll(numeros);
    //printf("string: %s\n",digitado);
    //printf("%s\n",numeros);
    if(final>9999999){
        printf("%s\n",numeros);
    }
    else
    printf("%lli\n",final);
    w=0;
    for(i=0;i<fim;i++)
    numeros[i]='\0';
    }
    
}