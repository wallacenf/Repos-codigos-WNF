#include <stdio.h>
void main(){
	int A,N,i,soma;
	soma=0;
	scanf("%i",&A);
	Validar:
	scanf("%i",&N);
	if (N<=0){
		goto Validar;
	}
	for (i=0;i<=N-1;i++){
		soma+=A+i;
	}
	printf("%i\n",soma);
}