#include <stdio.h>
void main(){
	int n,I,J;
	for (n=0;n<=12;n++){
		I=1+(3*n);
		J=60-(n*5);
		
		printf("I=%i J=%i\n",I,J);
	}
}