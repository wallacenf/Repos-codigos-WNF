#include <stdio.h>
void main(void){
	int x[10],i;
	for (i=0;i<10;i++){
		scanf("%i",&x[i]);
		if (x[i]>0)
			printf("X[%i] = %i\n",i,x[i]);
		else
			printf("X[%i] = 1\n",i);
	}

}