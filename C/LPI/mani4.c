#include <stdio.h>
#include <string.h>
// void Leitura()
// {
//     FILE *arq;
//     arq = fopen("atendimento.dat", "r+b");
//     fread()
// }

void main()
{
    typedef struct Data
    {
        int dia, mes, ano;
    } data;
    typedef struct Atendimento
    {
        int numAtend;
        data dataAtend;
        char tipoAtend;
        int codMed;
        int codPaci;
        float valor;
    } atendimento;

    FILE *arq;
    atendimento vAtend;
    arq = fopen("atendimento.dat", "a+b");
    while (1)
    {
        printf("Insira o nº do atendimento....");
        scanf("%i", &vAtend.numAtend);
        if (vAtend.numAtend == 0)
            break;
        printf("Insira a data do atendimento....");
        scanf("%i/%i/%i", &vAtend.dataAtend.dia, &vAtend.dataAtend.mes, &vAtend.dataAtend.ano);
        printf("Insira o tipo de atendimento[C,P]....");
        fpurge(stdin);
        scanf("%c", &vAtend.tipoAtend);
        printf("Insira o codigo do medico....");
        scanf("%i", &vAtend.codMed);
        printf("Insira o codigo do paciente....");
        scanf("%i", &vAtend.codPaci);
        printf("Insira o valor da consulta.... R$ ");
        scanf("%f", &vAtend.valor);
        fwrite(&vAtend, sizeof(vAtend), 1, arq);
    }
    fclose(arq);
    //Leitura;
    arq = fopen("atendimento.dat", "r+b");
    fread(&vAtend, sizeof(vAtend), 1, arq);
    while (!feof(arq))
    {
        printf("|%2i|%2i|%2i|%4i|%c|%2i|%2i|R$ %-3.0f|\n", vAtend.numAtend, vAtend.dataAtend.dia, vAtend.dataAtend.mes, vAtend.dataAtend.ano, vAtend.tipoAtend, vAtend.codMed, vAtend.codPaci, vAtend.valor);
        fread(&vAtend, sizeof(vAtend), 1, arq);
    }
    fclose(arq);
}