#include <stdio.h>
void main(){
	int n,i,a,b,f;
	f=0;
	a=1;
	b=0;
	scanf("%i",&n);
	for (i=0;i<=(n-1);i++){
		if (i==0){
			printf("%i ",i);
		}
		if (i<n-2){
			f=a+b;
			a=b;
			b=f;
			printf("%i ",f);
			}
		else if (i<n-1){
			f=a+b;
			a=b;
			b=f;
			printf("%i\n",f);
	
	}
	
}
}