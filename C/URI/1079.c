#include <stdio.h>
void main(){
	int N,i;
	float v1,v2,v3;
	scanf("%i",&N);
	for (i=1;i<=N;i++){
		scanf("%f%f%f",&v1,&v2,&v3);
		printf("%.1f\n",(v1*2+v2*3+v3*5)/10);
	}
}