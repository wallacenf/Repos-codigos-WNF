#include <stdio.h>
int pesquisaSeq(int *vet, int procura)
{
    for (int i = 0; i < 7; i++)
    {
        if (*(vet + i) == procura)
        {
            return i;
        }
    }
    return -1;
}

int pesquisaBin(int *Vet, int inicio, int fim, int procurado)
{
    int meio;
    meio = (inicio + fim) / 2;

    printf("Inicio: %i,Meio: %i Fim: %i\n", inicio, meio, fim);
    if (inicio > fim)
    {
        return -1;
    }
    if (procurado > Vet[meio])
    {
        return pesquisaBin(Vet, meio + 1, fim, procurado);
    }
    if (procurado < Vet[meio])
    {
        return pesquisaBin(Vet, inicio, meio - 1, procurado);
    }
    //if (procurado==)
    return meio;
}

void main()
{
    int vetor[7] = {10, 12, 15, 5, 20, 13, 9};
    int seek, result, i, j, minimo, tam, aux;
    printf("--------Pesquisa Sequencial---------------\n");
    printf("Digite o valor a ser procurado.....");
    scanf("%i", &seek);
    result = pesquisaSeq(vetor, seek);
    if (result > 0)
        printf("Indice do valor procurado.... %i\n", result);
    else
        printf("Valor inexistente no vetor procurado\n");

    printf("*************Pesquisa Sequencial***********\n");
    tam = 7;
    printf("Vetor ordenado: ");
    for (i = 0; i < tam; i++)
    {
        minimo = i;
        for (j = i + 1; j < tam; j++)
        {
            // pega indice do menor
            if (vetor[j] < vetor[minimo])
            {
                minimo = j;
            }
        }
        aux = vetor[minimo];
        vetor[minimo] = vetor[i];
        vetor[i] = aux;
    }
    for (i = 0; i < 7; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");
    result = pesquisaBin(vetor, 0, 6, seek);
    if (result >= 0)
    {
        printf("Indice ordenado achado.......%i\n", result);
    }
    else
    {
        printf("Valor inexistente no vetor ordenado\n");
    }
}
