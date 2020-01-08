#include <stdio.h>
#include <string.h>
void main(){
    int i,j,testes,tamanho,leds=0;
    char numero[1000];
    scanf("%i",&testes);
    for(j=0;j<testes;j++){
    scanf("%s",numero);
    tamanho = strlen(numero);
    
    for (i=0;i<tamanho;i++){
        if(numero[i]=='1')
        leds+=2;
        if(numero[i]=='2')
        leds+=5;
        if(numero[i]=='3')
        leds+=5;
        if(numero[i]=='4')
        leds+=4;
        if(numero[i]=='5')
        leds+=5;
        if(numero[i]=='6')
        leds+=6;
        if(numero[i]=='7')
        leds+=3;
        if(numero[i]=='8')
        leds+=7;
        if(numero[i]=='9')
        leds+=6;
        if(numero[i]=='0')
        leds+=6;}
    printf("%i leds\n",leds);
    leds=0;
    }
}