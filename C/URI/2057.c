#include <stdio.h>
void main(){
    int hora,viagem,fuso,sum;
    scanf("%i%i%i",&hora,&viagem,&fuso);
    sum = hora+viagem+fuso;
    if (sum<0)
    sum+=24;
    printf("%i\n",sum%24);
}