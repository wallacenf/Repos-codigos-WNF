#include <stdio.h>
void main(){
	double M[12][12],soma;
	int i,j,z,zi,zs;
	char O;
	zi=5;
	zs=6;
	soma=0;
	scanf("%c",&O);
	for (i=0;i<12;i++)
		for (j=0;j<12;j++){
			scanf("%lf",&M[i][j]);
	}
	for (z=7;z<12;z++)
	{
		for (j=zi;j<=zs;j++)
			soma+=M[z][j];
		zs++;
		zi--;
	}

	if (O=='S')
		printf("%.1lf\n",soma);
	if (O=='M')
		printf("%.1lf\n",soma/30);
}