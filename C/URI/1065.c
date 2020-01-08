#include <stdio.h>
void main(){
	int i,tp,x;
	tp=0;
	for (i=1;i<=5;i++){
		scanf("%i",&x);
	if (x%2==0)
		tp = tp+1;
	}
	printf("%i valores pares\n",tp);
}