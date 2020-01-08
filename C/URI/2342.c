#include <stdio.h>
void main(){
    int lim,p,q;
    char op;
    scanf("%i",&lim);
    scanf("%i",&p);
    scanf(" %c",&op);
    scanf("%i",&q);
    if (op=='+'){
        if (p+q<=lim) printf("OK\n");
        else printf("OVERFLOW\n");
    }
    if (op=='*'){
        if (p*q<=lim) printf("OK\n");
        else printf("OVERFLOW\n");

}
}