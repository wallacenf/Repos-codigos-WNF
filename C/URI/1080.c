#include <stdio.h>
void main(){
	int i,N,max,pos;
	max = 0;
	pos = 0;
	for (i=1;i<=100;i++){
		scanf("%i",&N);
	if (N>=max){
		max = N;
		pos = i;
	}
	}
	printf("%i\n",max);
	printf("%i\n",pos);
	
}