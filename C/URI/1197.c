/*Entrada
A entrada contém vários casos de teste. Cada linha da entrada é um caso de teste e contém dois inteiros v (-100 ≤ v ≤ 100) e 
t (0 ≤ t ≤ 200) ( t significa o momento no qual a partícula ganha aquela velocidade). O final da entrada é determinado por EOF.

Saída
Para cada linha de entrada imprima um único inteiro que denota o deslocamento no dobro do tempo fornecido.*/
#include <stdio.h>
void main(){    
    int v,t;
    while(1){
    scanf("%i%i",&v,&t);
    if (feof(stdin))
    break;
    printf("%i\n",v*t*2);
    }
}   