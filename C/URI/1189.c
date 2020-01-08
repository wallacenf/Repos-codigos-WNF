#include <stdio.h>
void main(){
	double M[12][12],soma;
	int i,j,z,li,ls;
	char O;
	li=1;
	ls=10;
	soma=0;
	scanf("%c",&O);
	for (i=0;i<12;i++)
		for (j=0;j<12;j++){
			scanf("%lf",&M[i][j]);
	}
	for (j=0;j<=4;j++){
		for(z=li;z<=ls;z++){
		soma+=M[z][j];}
	li++;
	ls--;
	}
	
	if (O=='S')
		printf("%.1lf\n",soma);
	if (O=='M')
		printf("%.1lf\n",soma/30);
}