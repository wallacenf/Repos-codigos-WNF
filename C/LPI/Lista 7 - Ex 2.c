#include <stdio.h>
void MostraVetor(double *Vetor)
{
    for (int i = 0; i < 5; i++)
    {
        printf("|%3.1lf|", *(Vetor + i));
    }
    printf("\n");
}

void main()
{
    double vetorBolha[5] = {10.4, 21.5, 4.5, 3.1, 1.2};
    double vetorIns[5] = {10.4, 21.5, 4.5, 3.1, 1.2};
    double vetorSel[5] = {10.4, 21.5, 4.5, 3.1, 1.2};

    int i, j, minimo, tam = 5;
    float temp, aux;
    MostraVetor(vetorBolha);
    printf("\n**********Metodo Bolha**********\n");
    for (i = 5 - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
            if (vetorBolha[j] > vetorBolha[j + 1])
            {
                temp = vetorBolha[j];
                vetorBolha[j] = vetorBolha[j + 1];
                vetorBolha[j + 1] = temp;
            }
        MostraVetor(vetorBolha);
    }
    MostraVetor(vetorBolha);
    printf("\n----------Metodo Insercao----------\n");
    MostraVetor(vetorIns);
    j = 1;
    while (j < tam)
    {
        aux = vetorIns[j];
        i = j - 1;
        while (i >= 0 && vetorIns[i] > aux)
        {
            vetorIns[i + 1] = vetorIns[i];
            i--;
        }
        vetorIns[i + 1] = aux;
        j++;
        MostraVetor(vetorIns);
    }
    MostraVetor(vetorIns);
    printf("\n>>>>>>>>>>Metodo Selecao<<<<<<<<<<\n");
    MostraVetor(vetorSel);
    for (i = 0; i < tam; i++)
    {
        minimo = i;
        // pega indice do menor
        for (j = i + 1; j < tam; j++)
        {
            if (vetorSel[j] < vetorSel[minimo])
            {
                minimo = j;
            }
        }
        aux = vetorSel[minimo];
        vetorSel[minimo] = vetorSel[i];
        vetorSel[i] = aux;
        MostraVetor(vetorSel);
    }
    MostraVetor(vetorSel);
}