#include <stdio.h>
void main(){
	int i,j,n,x,y,soma;
	soma=0;
	scanf("%i",&n);
	for (j=1;j<=n;j++){
		scanf("%i%i",&x,&y);
		for (i=x;i<(x+y*2);i++){
			if (i%2!=0){
				soma+=i;
			}
		
		}
	
	printf("%i\n",soma);
	soma=0;
	}
	
}
	