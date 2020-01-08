#include <stdio.h>
void main(){
	int x,y,i,soma;
	soma=0;
	scanf("%i%i",&x,&y);
	if (x<y){
		for (i=x;i<=y;i++){
			if (i%13!=0)
				soma += i;
		}
	printf("%i\n",soma);
	}
		if (y<x){
		for (i=y;i<=x;i++){
			if (i%13!=0)
				soma += i;
		}
	printf("%i\n",soma);
	}
}