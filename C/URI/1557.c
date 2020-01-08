#include <stdio.h>
#include <math.h>
void main(){
    int matriz[15][15],ordem,i,j,espaco=0,tamanho;
    while(1){
        scanf("%i",&ordem);
        if (ordem==0) break;
        tamanho = pow(2,(2*ordem-2));
        while(tamanho!=0){
            tamanho = tamanho/10;
            espaco++;
        }
        
        for (i=0;i<ordem;i++){
            for (j=0;j<ordem;j++){
                matriz[i][j]=pow(2,i+j);
            }
        }
        for (i=0;i<ordem;i++){
            for (j=0;j<ordem;j++){
                if(j==ordem-1)
                printf("%*i\n",espaco,matriz[i][j]);
                else
                printf("%*i ",espaco,matriz[i][j]);
                if (i==ordem-1 && j==ordem-1)
                printf("\n");
        }
    }
    espaco=0;
}
    }
