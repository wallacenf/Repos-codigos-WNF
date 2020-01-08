#include <stdio.h>
void main(){
	int HI,HF,tempo;
	scanf("%i%i",&I,&F);

	if (I == F)
		tempo = 24;
	if (F>I)
		tempo = F-I;
	if (F<I)
		tempo = ((24-I)+F);
	printf("O JOGO DUROU %i HORA(S)\n", tempo);
		
}