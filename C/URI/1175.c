#include <stdio.h>
void main(){
	int n[20],i;
	for (i=0;i<20;i++){
		scanf("%i",&n[i]);
		
	}
	for (i=0;i<20;i++)
		printf("N[%i] = %i\n",i,n[19-i]);
}