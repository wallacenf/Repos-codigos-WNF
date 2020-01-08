#include <stdio.h>
void main(){
	int N,i,e;
	scanf("%i",&e);
	for (i=1;i<=e;i++){
	scanf("%i",&N);	
	if (N==0)
		printf("NULL\n");
	if (N%2==0 && N>0 && N!=0)
		printf("EVEN POSITIVE\n");
	if (N%2==0 && N<0)
		printf("EVEN NEGATIVE\n");
	if (N%2!=0 && N>0)
		printf("ODD POSITIVE\n");
	if (N%2!=0 && N<0)
		printf("ODD NEGATIVE\n");
	}
}