#include <stdio.h>
void main(){
	int i,t,pop,pa,pb,anos;
	double paa,pbb;
	anos=0;
	double g1,g2;
	scanf("%i",&t);
	for (i=1;i<=t;i++){
		scanf("%i %i %lf %lf",&pa,&pb,&g1,&g2);
	while(pa<=pb){
		pa*=(g1/100.0)+1.0;
		pb*=(g2/100.0)+1.0;
		anos+=1;
		if (anos>100)
			break;
	}
	if (anos>100)
		printf("Mais de 1 seculo.\n");
	else
	printf("%i anos.\n",anos);
	anos=0;
	}
}