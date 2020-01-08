#include <stdio.h>
void main(){
	float  M[12][12],soma;
	int i,j,L;
	char T;
	soma=0;
	scanf("%i %c",&L,&T);
	for (i=0;i<12;i++)
		for (j=0;j<12;j++){
			scanf("%f",&M[i][j]);
			}
	for (j=0;j<12;j++){
		soma+=M[L][j];
	}
	if (T=='S')
	printf("%.1f\n",soma);
	if (T=='M')
		printf("%.1f\n",soma/12);
}