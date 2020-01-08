//Wállace Nascimento Ferreira 0030481913036

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char entrada[60], *pentrada, *pcpf;
    char CPF[12], faturas[50],boleto[30], *pboleto;
    int i,j,z,k,clientes,n;
    double soma;

    pentrada=entrada;
    pcpf=CPF;
    pboleto=boleto;

    n=0;
    scanf("%i",&clientes);
    
    while(n<clientes){
    fpurge(stdin);
    gets(entrada);
    j=0;
    soma=0;
    k=0;
    for (i=0;i<strlen(entrada);i++){
        if (isdigit(*(pentrada+i))){
            *(pcpf+j)=*(entrada+i);
            j++;
            //printf("dig %i: %c\n",j, entrada[i]);
            if (j==11){
            z=i+1;
            break;
            }

        }
    }
    for (i=z;i<strlen(entrada);i++){
        if (isdigit(*(pentrada+i)) || *(pentrada+i)=='.'){
            faturas[k]=*(pentrada+i);
            k++;
        }
    }
    while (k<strlen(faturas)){
        *(faturas+k)='\0';
        k++;
    }


//   printf("\nFaturas : %s\n", faturas);
    k=0;
    for (i=0;i<strlen(faturas);i++){
        if(*(faturas+i)!='.'){
            *(boleto+k)=*(faturas+i);
            //printf("\nbol n%i: %s",k,boleto);
            k++;
            }
        else
        {
        *(boleto+k)=*(faturas+i);
        *(boleto+k+1)=*(faturas+i+1);
        *(boleto+k+2)=*(faturas+i+2);
        soma+=atof(boleto);
        k=0;
        i+=2;
        // printf("soma parcial %s\n",boleto);
        for (j=0;j<30;j++)
        *(boleto+j)='\0';

        }
           
    }
    *(boleto+k+1)='\0';
    // printf("ultimo soma %lf\n", atof(boleto));
    soma+=atof(boleto);
    *(faturas)='\0';
    *(boleto)='\0';


    printf("\nCPF: %s", CPF);
    printf("\nSoma: %.2lf\n",soma);

    n++;
    }

}