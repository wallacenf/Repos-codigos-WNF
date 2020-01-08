#include <stdio.h>
void main(){
    int ho,i;
    scanf("%i",&ho);
    for (i=1;i<=ho;i++){
        if (i==ho) printf("Ho!\n");
        else printf("Ho ");
    }
}