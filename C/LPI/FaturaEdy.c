//Danubia Nunes - 0030481913007
//Edgar Steffen - 0030481913043

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arq, *errado;
char *subeno2, *aux;
int tamanho;

//Struct da fatura
typedef struct Faturano
{
    char codFatura[5], codProduta[4], nomeProduta[34], codForneca[5];
    int qtdProduta;
    double vlrUnitar, vlrFreta, vlrTatal;
} faturina;

faturina strFatura[500];

//Substring para separar as linhas
void Substreno(char *palavreno, int comeca, int termeno)
{
    *(palavreno + termeno + 1) = '\0';
    palavreno = (palavreno + comeca);
    aux = palavreno;
}

//Função para ler os arquivos
void Leitureno()
{
    char linhaTxt[70], temp[70];
    int i = 0;

    arq = fopen("fatura.txt", "r");
    fgets(linhaTxt, 80, arq);

    while (!feof(arq))
    {
        //Codigo fatura
        strcpy(temp, linhaTxt);
        aux = linhaTxt;
        Substreno(aux, 0, 3);
        strcpy(strFatura[i].codFatura, aux);

        //Codigo produto
        strcpy(linhaTxt, temp);
        Substreno(aux, 4, 6);
        strcpy(strFatura[i].codProduta, aux);

        //Nome do produto
        strcpy(linhaTxt, temp);
        aux = linhaTxt;
        Substreno(aux, 7, 39);
        strcpy(strFatura[i].nomeProduta, aux);

        //Quantidade de produtos na fatura
        strcpy(linhaTxt, temp);
        aux = linhaTxt;
        Substreno(aux, 40, 43);
        strFatura[i].qtdProduta = atoi(aux);

        //Valor unitário do produto
        strcpy(linhaTxt, temp);
        aux = linhaTxt;
        Substreno(aux, 44, 53);
        strFatura[i].vlrUnitar = ((atof(aux) / 100));

        //Valor do frete
        strcpy(linhaTxt, temp);
        aux = linhaTxt;
        Substreno(aux, 54, 63);
        strFatura[i].vlrFreta = ((atof(aux) / 100));
        //strcpy(strFatura[i].vlrFreta, aux);

        //Codigo fornecedor
        strcpy(linhaTxt, temp);
        aux = linhaTxt;
        Substreno(aux, 64, 67);
        strcpy(strFatura[i].codForneca, aux);

        //Valor total dos produtos
        strFatura[i].vlrTatal = (strFatura[i].qtdProduta * strFatura[i].vlrUnitar + strFatura[i].vlrFreta);

        //printf("Qtd: %i \nValUnit: %.2lf\nValFrete: %.2lf\nValTot: %.2lf\nFornc: %s\n\n\n ", strFatura[i].qtdProduta, strFatura[i].vlrUnitar, strFatura[i].vlrFreta, strFatura[i].vlrTatal, strFatura[i].codForneca);

        i++;
        fgets(linhaTxt, 80, arq);
    }
    tamanho = i;
    fclose(arq);
}

//Log de erro do programa
void Errado()
{
    char linhaTxt[80], temp[80];
    int i;

    //temp[68] = '\0';
    errado = fopen("ErroFatura.txt", "w");
    arq = fopen("fatura.txt", "r");

    for (i = 0; i < tamanho; i++)
    {
        fgets(linhaTxt, 75, arq);
        linhaTxt[68] = '\0';

        if (strFatura[i].qtdProduta == 0)
        {
            fprintf(errado, "%s QUANTIDADE DEVE SER MAIOR QUE ZERO\n", linhaTxt);
        }

        if (strFatura[i].vlrUnitar == 0.0)
        {
            fprintf(errado, "%s VALOR DEVE SER INFORMADO\n", linhaTxt);
        }

        if (strcmp(strFatura[i].codForneca, "0000") == 0)
        {
            fprintf(errado, "%s FORNECEDOR DEVE SER INFORMADO\n", linhaTxt);
        }
    }

    fclose(arq);
    fclose(errado);
}

void ExibiOrdem(faturina Ordeno[500])
{

    int i, j, minimo;
    faturina temp;
    for (i = 0; i < tamanho; i++)
    {
        minimo = i;
        for (j = i + 1; j < tamanho; j++)
        {
            if (strcmp(Ordeno[j].codFatura, Ordeno[minimo].codFatura) < 0)
            {
                minimo = j;
            }
        }
        temp = Ordeno[minimo];
        Ordeno[minimo] = Ordeno[i];
        Ordeno[i] = temp;
    }
    // int i = 0, a;
    // char auz[100];
    // faturina temp;

    // a = 1;

    // while (a < tamanho)
    // {
    //     strcpy(auz, Ordeno[a].codFatura);
    //     temp = Ordeno[i];
    //     i = a - 1;

    //     while (i >= 0 && strcmp(Ordeno[i].codFatura, auz) < 0)
    //     {

    //         printf("%s,%s\n", Ordeno[i].codFatura, Ordeno[i + 1].codFatura);
    //         //strcpy(Ordeno[i + 1].codFatura, Ordeno[i].codFatura);
    //         Ordeno[i + 1] = Ordeno[i];
    //         i = i - 1;
    //     }
    //     Ordeno[i + 1] = temp;
    //     a += 1;
    // }

    printf("| Fatura | Produto \t | Qtde | ValUnit($) | ValFrete($) | ValTotal($) |Fornecedor|\n");

    for (i = 1; i < tamanho; i++)
    {

        if (Ordeno[i].qtdProduta == 0 || Ordeno[i].vlrUnitar == 0.0 || (strcmp(Ordeno[i].codForneca, "0000") == 0))
        {
            continue;
        }

        printf("| %s | %s %s \t |  %2i  |     %2.2lf  |    %2.2lf    |   %-3.2lf  |    %s  |\n", Ordeno[i].codFatura, Ordeno[i].codProduta, Ordeno[i].nomeProduta, Ordeno[i].qtdProduta, Ordeno[i].vlrUnitar, Ordeno[i].vlrFreta, Ordeno[i].vlrTatal, Ordeno[i].codForneca);
    }
}

void main()
{
    Leitureno();
    Errado();
    ExibiOrdem(strFatura);
}