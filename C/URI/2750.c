/*O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

Criar 16 variáveis inteiras;
Atribuir a elas valores de 0 a 15 a cada um das variáveis anteriores;
Ter 39 traços (-) na primeira linha;
Ter uma | embaixo do primeiro traço, décimo terceiro, vigésimo terceiro e do trigésimo nono traço da primeira
 linha, embaixo do 4o traço deve começar a escrever “decimal”, embaixo do 16o traço deve começar a escreve
 r “octal”, embaixo do 26o traço deve começar a escrever “Hexadecimal” e o restante preencher com espaço em branco;
Repita o procedimento 1;
Ter uma | embaixo do primeiro traço, décimo terceiro, vigésimo terceiro e do trigésimo nono traço da primeira linha, 
embaixo do 8o traço deve imprimir o valor da primeira variável em valor decimal, embaixo do 18o traço
 deve imprimir o valor da primeira variável em valor octal, embaixo do 31o 
traço deve imprimir o valor da primeira variável em valor hexadecimal e o restante preencher com espaço em branco;
Repita o procedimento 6 para as outras 15 variáveis;
Repita o procedimento 1.*/
#include <stdio.h>
void main(){
    //int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
    //n0=0;    n1=1;    n2=2;    n3=3;    n4=4;    n5=5;    n6=6;    n7=7;    n8=8;    n9=9;    n10=10;    n11=11;    n12=12;    n13=13;    n14=14;    n15=15;
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    printf("|      0    |    0    |       0       |\n");
    printf("|      1    |    1    |       1       |\n");
    printf("|      2    |    2    |       2       |\n");
    printf("|      3    |    3    |       3       |\n");
    printf("|      4    |    4    |       4       |\n");
    printf("|      5    |    5    |       5       |\n");
    printf("|      6    |    6    |       6       |\n");
    printf("|      7    |    7    |       7       |\n");
    printf("|      8    |   10    |       8       |\n");
    printf("|      9    |   11    |       9       |\n");
    printf("|     10    |   12    |       A       |\n");
    printf("|     11    |   13    |       B       |\n");
    printf("|     12    |   14    |       C       |\n");
    printf("|     13    |   15    |       D       |\n");
    printf("|     14    |   16    |       E       |\n");
    printf("|     15    |   17    |       F       |\n");
    printf("---------------------------------------\n");
}
