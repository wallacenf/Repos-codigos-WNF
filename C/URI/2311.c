/*A primeira linha de entrada contém o número de competidoresN (0 ≤ N ≤ 100). 
A seguir são mostrados os nomes de cada um dos competidores seguidos pelo grau de dificuldade dos seus salt
GD (1.2 ≤ GD ≤ 3.8) e, a seguir, na linha seguinte, 
as 7 notas recebidas N1 a N7 (0 ≤ N1 a N7 ≤ 10).*/
#include <stdio.h>
void main(){
    int total,i,j;
    float nota[7],maior,min,media;
    float gd;
    char comp[10];
    nota[6] = 0;
    maior=0;
    min=100;
    media=0;
    scanf("%i",&total);
    for (j=0;j<total;j++){
        scanf(" %s ",&comp);
        scanf("%f",&gd);
        for (i=0;i<7;i++){
            scanf("%f",&nota[i]);
            if (nota[i]>maior)
            maior=nota[i];
            if (nota[i]<min)
            min=nota[i];
            media+=nota[i];
        }
        media =gd*(media-maior-min);
        printf("%s %.2f\n",comp,media);
    nota[6] = 0;
    maior=0;
    min=100;
    media=0;
    }
}