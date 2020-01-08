#include <stdio.h>
void main(){
    int ninja,jutsu;
    jutsu=0;
    while(1){
    scanf("%i",&ninja);
    if (feof(stdin))
        break;
    while((ninja/2)>0){
        jutsu++;
        ninja/=2;
    }
    printf("%i\n",jutsu);
    jutsu=0;
    }
}