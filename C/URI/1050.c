#include <stdio.h>
void main(){
	int ddd;
	scanf("%i",&ddd);
	
	if (ddd == 61)
		printf("Brasilia\n");
	if (ddd == 71)
		printf("Salvador\n");
	if (ddd == 11)
		printf("Sao Paulo\n");
	if (ddd == 21)
		printf("Rio de Janeiro\n");
	if (ddd == 32)
		printf("Juiz de Fora\n");
	if (ddd == 19)
		printf("Campinas\n");
	if (ddd == 27)
		printf("Vitoria\n");
	if (ddd == 31)
		printf("Belo Horizonte\n");
	if (ddd!=61 && ddd!=71 && ddd!=11 && ddd!=21 && ddd!=32 && ddd!=19 && ddd!=27 && ddd!=31)
		printf("DDD nao cadastrado\n");
}