#include <stdio.h>
void main(){
    int r1,r2,n,i;
    scanf("%i",&n);
    for(i=0;i<n;i++){
        scanf("%i%i",&r1,&r2);
        printf("%i\n",r1+r2);
    }
}