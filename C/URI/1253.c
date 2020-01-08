#include <stdio.h>
#include <string.h>
void main(){
    char palavra[50];
    int i,n,cifra,j;
    scanf("%i",&n);
    for(j=0;j<n;j++){            
        fflush(stdin);
        scanf(" %s",&palavra);
        scanf("%i",&cifra);
        for (i=0;i<strlen(palavra);i++){
            palavra[i]-=cifra;
            printf("%c",palavra[i]);
            if (i==strlen(palavra)-1){
                printf("\n");
            }
        }
    }
}





