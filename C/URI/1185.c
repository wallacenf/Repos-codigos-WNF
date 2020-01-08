#include <stdio.h>
void main(){
	float M[12][12],soma;
	int i,j;
	char O;
	soma=0;
	scanf("%c",&O);
	for (i=0;i<12;i++)
		for (j=0;j<12;j++){
			scanf("%f",&M[i][j]);
		}
	for (i=0;i<12;i++)
		for (j=0;j<11-i;j++)			
			soma+=M[i][j];
	
	if (O=='S')
		printf("%.1f\n",soma);
	if (O=='M')
		printf("%.1f\n",soma/(1+2+3+4+5+6+7+8+9+10+11));
}