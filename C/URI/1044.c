#include <stdio.h>
void main(){
	int A,B;
	scanf("%i%i",&A,&B);
	
	if (B%A==0 || A%B==0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
}