#include <stdio.h>
void main(){
	int i,n,fac;
	fac=1;
	
	scanf("%i",&n);
	for (i=n;i>=1;i--)
		fac*=i;
	printf("%i\n",fac);
}