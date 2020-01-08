#include <stdio.h>
void main(){
	int X,i;
	scanf("%i",&X);
	
	for (i=X;i<=X+12;i++)
		if (i%2!=0)
			printf("%i\n",i);
}