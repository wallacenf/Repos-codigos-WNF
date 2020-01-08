#include <stdio.h>
void main(){
    int testes,grupo,notas[999],media,i,j,acms;
    acms=0;
    media=0;
    float perc;
    scanf("%i",&testes);
    for (i=0;i<testes;i++){
        scanf("%i",&grupo);
        for(j=0;j<grupo;j++){
            scanf("%i",&notas[j]);
            media+=notas[j];
        }
        for(j=0;j<grupo;j++){
            if(notas[j]>(media/grupo)){
                acms++;
            }

        }
        perc=(float)acms/grupo*100.0;
        printf("%.3f%%\n",perc);
        acms=0;
        media=0;
    }

}