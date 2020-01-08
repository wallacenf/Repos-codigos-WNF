#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void main(){
    int i,j=1,k=9,dig1=0,dig2=0,idig1,idig2,somaTotal=0;
    char CPF[20];
    while(1){
        gets(CPF);
        if (feof(stdin)) break;
        for(i=0;i<strlen(CPF);i++){
            if (isalnum(CPF[i])){
                somaTotal+=((int)CPF[i]-'0');
            }
        }
        for (i=0;i<11;i++){
            if(isalnum(CPF[i])){
                dig1+=j*((int)CPF[i]-'0');
                //printf("%2i * %2i = %3i\n",j,((int)CPF[i]-'0',dig1));
                j++;
            }
        }
        for (i=0;i<11;i++){
            if(isalnum(CPF[i])){
                dig2+=k*((int)CPF[i]-'0');
               //printf("%2i * %2i = %3i\n",k,((int)CPF[i]-'0',dig2));
               k--;
            }
        }
        idig1=((int)CPF[12]-'0');
        if(dig1%11==10)
        dig1=0;
        else
        {
            dig1%=11;
        }
        idig2=((int)CPF[13]-'0');
        if (dig2%11==10)
        dig2=0;
        else
        {
            dig2%=11;
        }
        

        //printf("\n%i\n%i\n%i\n",somaTotal,dig1,dig2);
        if (dig1==idig1 && dig2==idig2 )
            printf("CPF valido\n");
            else
            {
                printf("CPF invalido\n");
            }
        somaTotal=0;
        dig1=0;
        dig2=0;
        j=1;
        k=9;        
    }
}