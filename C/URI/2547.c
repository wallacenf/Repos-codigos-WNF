/*Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso consiste em três inteiros N (1 ≤ N ≤ 100),
 Amin e Amax (50 ≤ Amin ≤ Amax ≤ 250), o número de visitantes, 
 a altura mínima e máxima em centímetros para andar na montanha-russa, respectivamente.

As N linhas seguintes contém, cada uma, um número inteiro Ai (50 ≤ Ai ≤ 250), a altura do i-ésimo visitante, em centímetros.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, imprima uma única linha com o número visitantes que podem passear na montanha-russa.*/
#include <stdio.h>
void main(){
     int entradas,amin,amax,alt,aprov,i;
     aprov=0;
     while(1){
     scanf("%i",&entradas);
     scanf("%i%i",&amin,&amax);
     if (feof(stdin))
     break;
     for (i=1;i<=entradas;i++){
         scanf("%i",&alt);
         if (alt>=amin && alt<=amax)
         aprov++;

     }
     printf("%i\n",aprov);
     aprov=0;
     }
}