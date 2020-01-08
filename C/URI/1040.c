#include <stdio.h>

void main(){
	float n1,n2,n3,n4,media,ne,mf;
	
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	media = (2*n1+3*n2+4*n3+n4)/10;
	printf("Media: %.1f\n", media);
	if (media >=7)
		printf("Aluno aprovado.\n");
	else if (media<5)
		printf("Aluno reprovado.\n");
	else if (media>=5 && media<7){
		printf("Aluno em exame.\n");
		scanf("%f",&ne);
		mf = (media+ne)/2;
		printf("Nota do exame: %.1f\n", ne);
		if (mf>=5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", mf);
		}
		else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", mf);
		}
		
	}
}