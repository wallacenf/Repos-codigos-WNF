#include <stdio.h>
void main(){
	int alc,gas,die,n;
	alc=0;
	gas=0;
	die=0;

	Entrada:
	scanf("%i",&n);
	if (n==1)
		alc+=1;
	else if (n==2)
		gas+=1;
	else if (n==3)
		die+=1;
	else if (n==4){
		goto saida;
	}
	if (n!=4){
	goto Entrada;}
	
	saida:
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %i\n",alc);
	printf("Gasolina: %i\n",gas);
	printf("Diesel: %i\n",die);
}