/*Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém o inteiro N (1 ≤ N ≤ 105), 
o número de jogadores em seu time. A próxima linha contém N inteiros v1, ..., vN (vi = 0 ou 1),
 indicando os votos dos jogadores. O valor 1 indica um voto favorável ao impeachment,
  enquanto o valor 0 indica um voto contrário ao mesmo.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, imprima uma linha contendo a palavra impeachment se o líder deve ser afastado de seu cargo, ou acusacao arquivada caso contrário.*/
#include <stdio.h>
void main(){
    int soma,time,i,voto;
    soma=0;
    while(1){
        scanf("%i",&time);
        if (feof(stdin))
        break;
        for(i=0;i<time;i++){
            scanf("%i",&voto);
            if (voto==1)
            soma++;
        }
        if ((float)soma>=(float)(time*2.0/3)){
            printf("impeachment\n");
        }
            else
            {
                printf("acusacao arquivada\n");
            }
        soma=0;
            
        
    }
}