#include <stdio.h>
void main(){
	int n,i,j,X,soma;
		soma=0;
	scanf("%i",&n);
	for (i=1;i<=n;i++){
		scanf("%i",&X);
		for (j=1;j<X;j++){
			if (X%j==0)
				soma+=j;
			
		}
		if (soma==X)
			printf("%i eh perfeito\n",X);
		else
			printf("%i nao eh perfeito\n",X);
		soma=0;
	}
}