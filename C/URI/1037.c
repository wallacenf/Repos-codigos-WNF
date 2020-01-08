#include <stdio.h>

void main(void){
	float valor;
	scanf("%f",&valor);
	
	if (valor<=25 && valor >=0)
		printf("Intervalo [0,25]\n");
	if (valor<=50 && valor>25)
		printf("Intervalo (25,50]\n");
	if (valor<=75 && valor>50)
		printf("Intervalo (50,75]\n");
	if (valor<=100 && valor>75)
		printf("Intervalo (75,100]\n");
	if (valor<0 || valor>100)
		printf("Fora de intervalo\n");
	
}