#include <stdio.h>
void main(){
	int i,n,soma;
	soma=0;
	while(1){
		scanf("%i",&n);
		if (n==0)
			break;
		for (i=n;i<(n+10);i++){
		if (i%2==0){
			soma+=i;
		}
			
	}
	printf("%i\n",soma);
	soma=0;
	}
}