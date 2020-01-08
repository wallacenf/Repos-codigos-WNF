#include <stdio.h>
void main(){
	int x,i;
	while(1){
		scanf("%i",&x);
		if (x==0)
			break;
		for (i=1;i<=x;i++){
		if (i<x)
			printf("%i ",i);
		else
			printf("%i\n",i);
		}
	}
}