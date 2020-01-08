#include <stdio.h>
void main(){
	int v,n[10],i,a;
	scanf("%i",&v);
	for (i=0;i<10;i++){
		if (i==0)
			n[i]=v;
		else {
		n[i] = 2*n[i-1];
		}
		printf("N[%i] = %i\n",i,n[i]);
	}
}