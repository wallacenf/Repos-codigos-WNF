#include <stdio.h>
void main(){
	int x,i,o,n,e;
	i=0;
	o=0;
	scanf("%i",&e);
	for (n=1;n<=e; n++){
		scanf("%i",&x);
		if (x>=10 && x<=20)
			i = i + 1;
		else
			o = o + 1;
	}
	printf("%i in\n",i);
	printf("%i out\n",o);
}