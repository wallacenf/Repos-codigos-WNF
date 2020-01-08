#include <stdio.h>
void main(void){
	int n,x[1000],i,min,pos,val;
	min=1000;
	scanf("%i",&n);
	for (i=0;i<n;i++){
		scanf("%i",&val);
		x[i]=val;
		if (val<min){
			min=val;
			pos=i;
		}
	}
	printf("Menor valor: %i\n",min);
	printf("Posicao: %i\n",pos);
}