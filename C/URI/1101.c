#include <stdio.h>
void main(){
	int n,m,i,j,sum;
	while(1) {
	scanf("%i%i",&n,&m);
	sum=0;
	if (n<=0 || m<=0)
		break;
	else if (m>n){
		for (i=n;i<=m;i++){
			sum = sum + i;
			printf("%i ",i);
		}
		printf("Sum=%i\n",sum);
	}
	else if (n>m){
		for (i=m;i<=n;i++){
			sum = sum+i;
			printf("%i ",i);
		}
		printf("Sum=%i\n",sum);
	}
	}
}