#include <stdio.h>
void main(){
	double M[12][12],soma;
	int i,j;
	char O;
	soma=0;
	scanf("%c",&O);
	for (i=0;i<12;i++)
		for (j=0;j<12;j++){
			scanf("%lf",&M[i][j]);
	}
	for (i=0;i<12;i++)
		for (j=1+i;j<11-i;j++)
			soma+=M[i][j];
	
	if (O=='S')
		printf("%.1lf\n",soma);
	if (O=='M')
		printf("%.1lf\n",soma/30);
}