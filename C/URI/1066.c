#include <stdio.h>
void main(){
	int i,x,par,impar,pos,neg;
	par=0;
	impar=0;
	pos=0;
	neg=0;
	for (i=1;i<=5;i++){
		scanf("%i",&x);
		if (x>0)
			pos = pos +1;
		else if(x<0)
			neg = neg +1;
		if (x%2==0)
			par = par +1;
		else
			impar = impar+1;
		
	}
	printf("%i valor(es) par(es)\n",par);
	printf("%i valor(es) impar(es)\n",impar);
	printf("%i valor(es) positivo(s)\n",pos);
	printf("%i valor(es) negativo(s)\n",neg);
}