#include <stdio.h>
void main(){
	int x,z,i,numsoma,total;
	numsoma=1;
	i=0;
	scanf("%i",&x);
	total=x;
	Validar:
	scanf("%i",&z);
	if (z<=x)
		goto Validar;
	do{
		total= total + (x+i);
		numsoma++;
		i++;
	}
	while(total<=z);
	printf("%i\n",numsoma);
}