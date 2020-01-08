#include <stdio.h>
#include <math.h>
void main(){
	int i;
	float S;
	S=0;
	for (i=0;i<=19;i++)
		S=S+(2*i+1)/pow(2,i);
	printf("%.2f\n",S);
}