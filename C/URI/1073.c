#include <stdio.h>
void main(){
	int N,i;
	scanf("%i",&N);
	for (i=1;i<=N;i++){
		if (i%2==0)
			printf("%i^2 = %i\n",i,i*i);
	}
		
	
}