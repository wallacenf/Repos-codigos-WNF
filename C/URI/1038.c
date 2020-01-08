#include <stdio.h>


void main(void){
	int cod,qtd;
	float preco,total;
	scanf("%i%i",&cod,&qtd);
	if (cod == 1)
		preco = 4;
	if (cod == 2)
		preco = 4.5;
	if (cod == 3)
		preco = 5;
	if (cod == 4)
		preco = 2;
	if (cod == 5)
		preco = 1.5;
	total = qtd * preco;
	printf("Total: R$ %.2f\n", total);
}