//Wállace Nascimento Ferreira 0030481913036

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *aux;
int tam;
FILE *arq;
FILE *erro;

typedef struct Fatura
{
    char codFat[5], codProd[4], nomeProd[34], forcedor[5];
    double valUnit, valFrete, valTotal;
    int qtd;
} fatura;

fatura vFatura[500];

void *Substring(char *entrada, int inicio, int fim)
{
    *(entrada + fim + 1) = '\0';
    entrada = (entrada + inicio);
    aux = entrada;
}
void Leitura()
{
    char registro[70], temporario[70];
    int n = 0;

    arq = fopen("fatura.txt", "r");
    fgets(registro, 80, arq);
    while (!feof(arq))
    {
        strcpy(temporario, registro);
        aux = registro;
        Substring(aux, 0, 3);
        strcpy(vFatura[n].codFat, aux);
        strcpy(registro, temporario);
        Substring(aux, 4, 6);
        strcpy(vFatura[n].codProd, aux);
        strcpy(registro, temporario);
        aux = registro;
        Substring(aux, 7, 39);
        strcpy(vFatura[n].nomeProd, aux);
        strcpy(registro, temporario);
        aux = registro;
        Substring(aux, 40, 43);
        vFatura[n].qtd = atoi(aux);
        strcpy(registro, temporario);
        aux = registro;
        Substring(aux, 44, 53);
        vFatura[n].valUnit = ((atof(aux) / 100));
        strcpy(registro, temporario);
        aux = registro;
        Substring(aux, 54, 63);
        vFatura[n].valFrete = (atof(aux) / 100);
        strcpy(registro, temporario);
        aux = registro;
        Substring(aux, 64, 67);
        strcpy(vFatura[n].forcedor, aux);
        if (vFatura[n].qtd != 0 && vFatura[n].valUnit != 0)
            vFatura[n].valTotal = (vFatura[n].valUnit * vFatura[n].qtd + vFatura[n].valFrete);
        else
            vFatura[n].valTotal = 0;

        n++;
        fgets(registro, 80, arq);
    }
    tam = n;
    fclose(arq);
}

void Erros()
{
    char registro[80], temp[80];
    int i;
    erro = fopen("ErroFatura.txt", "w");
    arq = fopen("fatura.txt", "r");
    for (i = 0; i < tam; i++)
    {
        fgets(registro, 75, arq);
        registro[68] = '\0';
        if (vFatura[i].qtd == 0)
        {
            fprintf(erro, "%s A QUANTIDADE DEVE SER MAIOR QUE ZERO\n", registro);
        }
        if (vFatura[i].valUnit == 0.0)
        {
            fprintf(erro, "%s VALOR DEVE SER INFORMADO\n", registro);
        }
        if (strcmp(vFatura[i].forcedor, "0000") == 0)
        {
            fprintf(erro, "%s FORNECEDOR DEVE SER INFORMADO\n", registro);
        }
    }
    fclose(arq);
    fclose(erro);
}

void Exibir()
{
    int i;
    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("|Fatura| Produto                                  | Qtde | ValUnit($) | ValFrete($) | ValTotal($) |Fornecedor|\n");
    printf("-------------------------------------------------------------------------------------------------------------\n");
    for (i = 1; i < tam; i++)
    {

        if (vFatura[i].qtd == 0 || vFatura[i].valUnit == 0.0 || (strcmp(vFatura[i].forcedor, "0000") == 0))
        {
            continue;
        }
        printf("| %s | %s %s    |  %2i  |     %2.2lf  |    %2.2lf    |   %-3.2lf\t  |    %s  |\n", vFatura[i].codFat, vFatura[i].codProd, vFatura[i].nomeProd, vFatura[i].qtd, vFatura[i].valUnit, vFatura[i].valFrete, vFatura[i].valTotal, vFatura[i].forcedor);
        printf("-------------------------------------------------------------------------------------------------------------\n");
    }
}

void Ordenar(fatura Ordem[500])
{
    int i, j, n, minimo;
    fatura temp, fatOrg[500];
    for (i = 0; i < tam; i++)
    {
        minimo = i;
        for (j = i + 1; j < tam; j++)
        {
            if (strcmp(Ordem[j].codFat, Ordem[minimo].codFat) < 0)
            {
                minimo = j;
            }
        }
        temp = Ordem[minimo];
        Ordem[minimo] = Ordem[i];
        Ordem[i] = temp;
    }
    n = 0;
    for (i = 0; i < tam; i++)
    {
        if (Ordem[i].qtd == 0 || Ordem[i].valUnit == 0.0 || (strcmp(Ordem[i].forcedor, "0000") == 0))
        {
            continue;
        }
        else
        {
            fatOrg[n] = Ordem[i];
            n++;
        }
    }

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("|Fatura| Produto                                  | Qtde | ValUnit($) | ValFrete($) | ValTotal($) |Fornecedor|\n");
    printf("-------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("| %s | %s %s    |  %2i  |     %2.2lf  |    %2.2lf    |   %-3.2lf\t  |    %s  |\n", fatOrg[i].codFat, fatOrg[i].codProd, fatOrg[i].nomeProd, fatOrg[i].qtd, fatOrg[i].valUnit, fatOrg[i].valFrete, fatOrg[i].valTotal, fatOrg[i].forcedor);
        printf("-------------------------------------------------------------------------------------------------------------\n");
    }
}

void SomaFornecedor(fatura Ordem[500])
{
    double soma = 0;
    int minimo, i, n, j;
    fatura temp, fatOrg[500];
    for (i = 0; i < tam; i++)
    {
        minimo = i;
        for (j = i + 1; j < tam; j++)
        {
            if (strcmp(Ordem[j].forcedor, Ordem[minimo].forcedor) < 0)
            {
                minimo = j;
            }
        }
        temp = Ordem[minimo];
        Ordem[minimo] = Ordem[i];
        Ordem[i] = temp;
    }
    n = 0;
    for (i = 0; i < tam; i++)
    {
        if (Ordem[i].qtd == 0 || Ordem[i].valUnit == 0.0 || (strcmp(Ordem[i].forcedor, "0000") == 0))
        {
            continue;
        }
        else
        {
            fatOrg[n] = Ordem[i];
            n++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (strcmp(fatOrg[i].forcedor, fatOrg[i + 1].forcedor) == 0)
        {
            soma += fatOrg[i].valTotal;
        }
        else
        {
            soma += fatOrg[i].valTotal;
            printf("O Fornecedor: %s vendeu R$ %.2lf\n", fatOrg[i].forcedor, soma);
            soma = 0;
        }
    }
}

void main()
{
    int opcoes;
    Leitura();
    printf("Escolha a opçao:\nDigite 1 para exibir a leitura das faturas.\nDigite 2 para gerar relatório de erros\nDigite 3 para exibir faturas ordenadas\nDigite 4 para exibir o total de vendas por forncedor.\nDigite 5 para sair.\nEntrada do user.....");
    scanf("%i", &opcoes);
    while (opcoes != 5)
    {
        if (opcoes == 1)
        {
            Exibir();
        }
        if (opcoes == 2)
        {
            Erros();
            printf("\nRelatorio de Erros gerado em ErroFatura.txt\n");
        }
        if (opcoes == 3)
            Ordenar(vFatura);
        if (opcoes == 4)
            SomaFornecedor(vFatura);
        printf("Escolha a opçao:\nDigite 1 para exibir a leitura das faturas.\nDigite 2 para gerar relatório de erros\nDigite 3 para exibir faturas ordenadas\nDigite 4 para exibir o total de vendas por forncedor.\nDigite 5 para sair.\nEntrada do user.....");
        scanf("%i", &opcoes);
    }
}