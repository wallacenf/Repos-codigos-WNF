#include <stdio.h>
void main(){
	int i,n,x,j,val;
	val=0;
	scanf("%i",&n);
	for (i=1;i<=n;i++){
		scanf("%i",&x);
		for (j=1;j<=x;j++){
			if (x%j==0)
				val++;
		}
	if (val<=2)
	printf("%i eh primo\n",x);
	else
	printf("%i nao eh primo\n",x);
	val=0;
	}
}