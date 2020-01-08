#include <stdio.h>
void main(){
	int n,i;
	float x,y,q;
	
	scanf("%i",&n);
	for (i=1;i<=n;i++){
		scanf("%f%f",&x,&y);
		if (y==0)
			printf("divisao impossivel\n");
		else{
		q = x/y;
		printf("%.1f\n",q);
		}
	}
		
}