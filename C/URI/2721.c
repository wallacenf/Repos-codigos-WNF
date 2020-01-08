#include <stdio.h>
void main(){
    int soma,bolas,i;
    soma=0;
    for (i=0;i<9;i++){
        scanf("%i",&bolas);
        soma+=bolas;
    }
    if (soma%9==1)
    printf("Dasher\n");
    if (soma%9==2)
    printf("Dancer\n");
    if (soma%9==3)
    printf("Prancer\n");
    if (soma%9==4)
    printf("Vixen\n");
    if (soma%9==5)
    printf("Comet\n");
    if (soma%9==6)
    printf("Cupid\n");
    if (soma%9==7)
    printf("Donner\n");
    if (soma%9==8)
    printf("Blitzen\n");
    if (soma%9==0)
    printf("Rudolph\n");



}