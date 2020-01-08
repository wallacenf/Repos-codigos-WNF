#include <stdio.h>
void main(){
	int i;
	float a[100],v;
	for (i=0;i<100;i++){
		scanf("%f",&a[i]);
		if (a[i]<=10){
		printf("A[%i] = %.1f\n",i,a[i]);}
	}
	
}