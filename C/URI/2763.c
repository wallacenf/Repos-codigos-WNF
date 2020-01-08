#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void main(){
    char cpf[20],xxx[5],yyy[5],zzz[5],dd[3];
    int i,j=0,k=0,l=0,m=0;
    int dig1,dig2,dig3,dig4;
    fflush(stdin);
    gets(cpf);
    for(i=0;i<strlen(cpf);i++){
        if (i>=0 && i<=2){
            xxx[j]=cpf[i];
            j++;
        }
        if (i>=4 && i<=6){
            yyy[k]=cpf[i];
            k++;
        }
        if (i>=8 && i<=10){
            zzz[l]=cpf[i];
            l++;
        }
        if (i==12 || i==13){
            dd[m]=cpf[i];
            m++;
        }
        

    }
    dig1=atoi(xxx);
    dig2=atoi(yyy);
    dig3=atoi(zzz);
    dig4=atoi(dd);
    printf("%03i\n%03i\n%03i\n%02i\n",dig1,dig2,dig3,dig4);
}   
