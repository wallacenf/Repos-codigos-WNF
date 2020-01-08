#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    int CPF[10]={0,0,0,0,0,0,0,0,0},i,j=1,k=9,dig1=0,dig2=0;
    long long int cpfin;
    char CPFs[10];
    while(1){
        fflush(stdin);
        gets(CPFs);
        cpfin= atoll(CPFs);
        //scanf("%lli",&cpfin);
        if(feof(stdin)) break;
        for (i=8;i>=0;i--){
            //printf("CPFin = %lli\n",cpfin);
            CPF[i]=cpfin%10;
            cpfin/=10;
        }
        for (i=0;i<9;i++){
            dig1+=CPF[i]*j;
            j++;
        }
        for (i=0;i<9;i++){
            dig2+=CPF[i]*k;
            k--;
        }
        if (dig1%11==10){
            dig1=0;
        }
        else
        {
            dig1%=11;
        }
        if (dig2%11==10){
            dig2=0;
        }
        else
        {
            dig2%=11;
        }
        


        for(i=0;i<9;i++){
            printf("%i",CPF[i]);
            if (i==2 || i==5){
                printf(".");
            }
            if(i==8)
            printf("-%i%i\n",dig1,dig2);
        }

        dig1=0;
        dig2=0;
        j=1;
        k=9;

    }
}

