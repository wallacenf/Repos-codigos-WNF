#include <stdio.h>
#include <math.h>
void main(){
	float S;
	int i;
	S=0;
	for (i=1;i<=100;i++)
		S=S+pow(i,-1);
	printf("%.2f\n",S);
}