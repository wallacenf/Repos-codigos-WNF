#include <stdio.h>
void main(){
	int gre,inter,emp,x,y,grenal,cond;
	gre=0;
	inter=0;
	emp=0;
	grenal=0;
	
	NovoTeste:
	scanf("%i%i",&x,&y);
	if (x==y)
		emp+=1;
	else if (x>y)
		inter+=1;
	else if (y>x)
		gre+=1;
	grenal+=1;
	
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%i",&cond);
	
	if (cond==1){goto NovoTeste;}
	else if (cond==2){	
	printf("%i grenais\n",grenal);
	printf("Inter:%i\n",inter);
	printf("Gremio:%i\n",gre);
	printf("Empates:%i\n",emp);
	if (inter>gre)
		printf("Inter venceu mais\n");
	else if (gre>inter)
		printf("Gremio venceu mais\n");
	else if (gre=inter)
		printf("Nao houve vencedor\n");
	}
	
}