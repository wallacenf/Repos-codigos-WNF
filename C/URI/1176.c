#include <stdio.h>
void main(){
	unsigned long long int f[60],a,b;
	int x,n,i,j;
	scanf("%i",&n);
	for (i=1;i<=n;i++){
		scanf("%i",&x);
		f[0]=0;
		f[1]=1;
		for (j=2;j<=60;j++){
			a=f[j-2];
			b=f[j-1];
			f[j]=a+b;
					
		}
		j=x;
		printf("Fib(%i) = %llu\n",x,f[j]);
	}
}