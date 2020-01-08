#include <stdio.h>
void main(){
    int n,m;
    long long int soman,somam;
    int i,j;
    soman=1;
    somam=1;
    while(1){
    scanf("%i%i",&n,&m);
    if(feof(stdin)) break;
    for (i=n;i>=1;i--)
    soman*=i;
    for (j=m;j>=1;j--)
    somam*=j;
    printf ("%lli\n",somam+soman);
    soman=1;
    somam=1;
}
}