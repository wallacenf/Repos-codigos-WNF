#include <stdio.h>
void main(){
	int escolha,num;
	float total,nota;
	num=0;
	total=0;
	
	Validar:
	scanf("%f",&nota);
		if (nota<0 || nota>10)
		printf("nota invalida\n");
	else{
		num+=1;
		total+=nota;}
	
	if (num<2){goto Validar;}

	if (num==2){
		printf("media = %.2f\n",total/num);
		Repete:
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%i",&escolha);
		if (escolha==1){
			num=0;
			total=0;
			goto Validar;
		}
		if (escolha==2)
			return 0;
		if (escolha!=1 || escolha!=2){
		goto Repete;}
				
	}
	
}