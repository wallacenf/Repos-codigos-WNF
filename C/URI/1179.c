#include <stdio.h>
void main(){
	int par[5]={0},impar[5]={0},i,n,x,y,j,k;
	x=0;
	y=0;
	i=1;
	
	for (i=0;i<15;i++){
	scanf("%i",&n);
	if (n%2==0){
		par[x]=n;
		x++;
		if (x>4){
				printf("par[0] = %i\n", par[0]);
				printf("par[1] = %i\n", par[1]);
				printf("par[2] = %i\n", par[2]);
				printf("par[3] = %i\n", par[3]);
				printf("par[4] = %i\n", par[4]);
			x=0;
	}
	}
	else{
		impar[y]=n;
		y++;
		if (y>4){
				printf("impar[0] = %i\n", impar[0]);
				printf("impar[1] = %i\n", impar[1]);
				printf("impar[2] = %i\n", impar[2]);
				printf("impar[3] = %i\n", impar[3]);
				printf("impar[4] = %i\n", impar[4]);
			y=0;
			
		}
	}
	}
	for (j=0;j<y;j++)
		printf("impar[%i] = %i\n",j,impar[j]);
	for (k=0;k<x;k++)
		printf("par[%i] = %i\n",k,par[k]);
}
	


	