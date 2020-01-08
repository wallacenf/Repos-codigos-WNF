#include <stdio.h>
void main(){
	int i,n[1000],t,j;
	i=0;
	scanf("%i",&t);
	do {
	for (j=0;j<t;j++){
		n[i]=j;
		printf("N[%i] = %i\n",i,n[i]);
		i++;
		if (i==1000)
			break;
	}
	
	}
	while(i<1000);
	}