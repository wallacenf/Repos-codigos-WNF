/*A entrada contém vários casos de teste e termina com EOF. Cada caso de teste consiste de uma linha contendo o número N de reclamações sobre a copa encaminhadas para a presidente (0 ≤ N ≤ 100).

Saída
Para cada teste, a saída consiste de uma linha dizendo "vai ter copa!" caso não haja reclamações para a presidente. Caso haja reclamações, a saída deverá dizer "vai ter duas!".*/
#include <stdio.h>
void main(){
    int rec;
    while(1){
        scanf("%i",&rec);
        if(feof(stdin))
        break;
        if (rec==0)
        printf("vai ter copa!\n");
        else
        {
            printf("vai ter duas!\n");
        }
        
    }
}