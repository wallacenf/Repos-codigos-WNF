/*Entrada
A entrada consiste de múltiplos casos de teste, e cada um consiste em duas linhas: 
A primeira linha contém um inteiro L (1 ≤ L ≤ 500) representando o número de lesmas do grupo, 
e a segunda linha contém L inteiros Vi (1 ≤ Vi ≤ 50) representando as velocidades de cada lesma do grupo.
A entrada termina com o fim do arquivo (EOF).

Saída
Para cada caso de teste, imprima uma única linha indicando o nível de velocidade da lesma mais veloz do grupo.*/
#include <stdio.h>
void main(){
    int L,v,maior,i,class;
    maior=0;
    while(1){
        scanf("%i",&L);
        if(feof(stdin))
        break;
    for (i=1;i<=L;i++){
        scanf("%i",&v);
        if (v>maior)
        maior=v;
    }
    if (maior<10) class=1;
    else if (maior>=10 && maior<20) class=2;
    else if (maior>=20) class=3;
    printf("%i\n",class);
    maior=0;
    }
}