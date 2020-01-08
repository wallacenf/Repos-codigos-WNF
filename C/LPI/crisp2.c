//Wállace Nascimento Ferreira
//0030481913036

#include <stdio.h>
//Função de localizar o indice do valor com retorno -1 em caso de valor nao encontrado 2.b)
int Localiza(int *vetor, int valor){
    int j;
    for (j=0;j<7;j++){
        if (valor == *(vetor+j)){
            return j;
        }
    }
    return -1;
}
//Manipulação do valor do vetor 2.c)
void Manipula(int *vetor){
    int k,n, vetorNovo[7]={0};
    for (k=0;k<7;k++){
        n=k;
        do{
            *(vetorNovo+k) += *(vetor+n);
            n--;
        } while (n>=0);
    }
    for(k=0;k<7;k++){
        printf("Novo valor: %i na posição %i\n",*(vetorNovo+k),k);
    }
    }
    

void main(){
    int vector[7],i,*pint,search,k;
    pint=vector;
    //Entrada dos valores pro vetor inicial 2.a)
    for (i=0;i<7;i++){
        scanf("%i",pint+i);
        printf("%i armazenado na posição %i no endereço %p\n",*(pint+i),i,(pint+i));
    }
    printf("Coloque um valor para procurar no vetor: ");
    scanf("%i",&search);

    printf("Indice: %i\n", Localiza(pint,search));
    Manipula(pint);
    }
    
