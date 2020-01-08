#include <stdio.h>
void main(){
	int linhas,i,j,pum;
	pum=0;
	scanf("%i",&linhas);
	for (i=1;i<=(linhas*4);i++){
	if (i%4==0)
		printf("PUM\n");
	else 
		printf("%i ",i);
	}
}