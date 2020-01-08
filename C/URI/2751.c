/*O seu professor de programação gostaria que você fizesse um programa com as seguintes características:
Mostre na linha seguinte a frase "1) b = ", e o valor da variável b;
Mostre na linha seguinte a frase "2) b = ", e o valor da variável b usando 20 espaço e justificado à direita;
Mostre na linha seguinte a frase "3) b = ", e o valor da variável b usando 20 espaço preenchidos com 0;
Mostre na linha seguinte a frase "4) b = ", e o valor da variável b usando 20 espaço e justificado à esquerda;
Mostre na linha seguinte a frase "5) b = ", e o valor da variável b seguido do carácter '%';
Pule uma linha;
Mostre na linha seguinte a frase: "Valores de d:";
Mostre na linha seguinte a mesma quantidade de carácter da frase "Valores de d:", só que com traço (-);
Mostre na linha seguinte a frase "1) d = ", e o valor da variável d;
Mostre na linha seguinte a frase "2) d = ", e o valor da variável d somente com sua parte inteira;
Mostre na linha seguinte a frase "3) d = ", e o valor da variável d com uma casa decimal;
Mostre na linha seguinte a frase "4) d = ", e o valor da variável d com duas casas decimais;
Mostre na linha seguinte a frase "5) d = ", e o valor da variável d com três casas decimais;
Mostre na linha seguinte a frase "6) d = ", e o valor da variável d com três casas decimais e colocados em 20 espaço;
Mostre na linha seguinte a frase "7) d = ", e o valor da variável d com três casas decimais e colocados em 20 espaço com 0 nos espaço em branco;
Repita o procedimento 19 com justificativa à esquerda;
Mostre na linha seguinte a frase "9) d = ", e o valor da variável d com duas casas decimais seguido do carácter '%'.*/
#include <stdio.h>
void main(){
    int a,b;
    float c,d;
    a=15;
    b=a/2;
    c=15.456;
    d=c/7;
    printf("Valores de b:\n");
    printf("-------------\n");
    printf("1) b = %i\n",b);
    printf("2) b = %20i\n",b);
    printf("3) b = %020i\n",b);
    printf("4) b = %-20i\n",b);
    printf("5) b = %i%%\n",b);
    printf("\n");
    /*Mostre na linha seguinte a mesma quantidade de carácter da frase "Valores de d:", só que com traço (-);
Mostre na linha seguinte a frase "1) d = ", e o valor da variável d;
Mostre na linha seguinte a frase "2) d = ", e o valor da variável d somente com sua parte inteira;
Mostre na linha seguinte a frase "3) d = ", e o valor da variável d com uma casa decimal;
Mostre na linha seguinte a frase "4) d = ", e o valor da variável d com duas casas decimais;
Mostre na linha seguinte a frase "5) d = ", e o valor da variável d com três casas decimais;
Mostre na linha seguinte a frase "6) d = ", e o valor da variável d com três casas decimais e colocados em 20 espaço;
Mostre na linha seguinte a frase "7) d = ", e o valor da variável d com três casas decimais e colocados em 20 espaço com 0 nos espaço em branco;
Repita o procedimento 19 com justificativa à esquerda;
Mostre na linha seguinte a frase "9) d = ", e o valor da variável d com duas casas decimais seguido do carácter '%'.*/
    printf("Valores de d:\n");
    printf("-------------\n");
    printf("1) d = %f\n",d);
    printf("2) d = %.0f\n",d);
    printf("3) d = %.1f\n",d);
    printf("4) d = %.2f\n",d);
    printf("5) d = %.3f\n",d);
    printf("6) d = %20.3f\n",d);
    printf("7) d = %020.3f\n",d);
    printf("8) d = %-020.3f\n",d);
    printf("9) d = %.2f%%\n",d);
}