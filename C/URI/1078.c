#include <stdio.h>
void main(){
	int i,N;
	scanf("%i", &N);
	
	for (i=1;i<=10;i++)
		printf("%i x %i = %i\n",i,N,i*N);
}