#include <stdio.h>
void main(){
int i,j,ord,M[12][12];
while (1){
	scanf("%i",&ord);
	if (ord==0)
		break;
	for (i=1;i<=ord;i++)
		for (j=1;j<=ord;j++){
			printf("%i ",i);
			if (j==ord)
				printf("\n");
		}
}
}