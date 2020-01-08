#include <stdio.h>
void main(){
	int i;
	double valor,n[100];
	scanf("%lf",&valor);
	for (i=0;i<100;i++){
		if (i==0)
			n[0]=valor;
		else
			n[i]=n[i-1]/2.00;
		printf("N[%i] = %.4lf\n",i,n[i]);
	}
}