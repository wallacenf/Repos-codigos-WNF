#include <stdio.h>
void main(){
	int N,i,cob;
	char C,S,R,A;
	float tc,tr,ts,all;
	tc=0;
	tr=0;
	ts=0;
	
	scanf("%i",&N);
	for (i=1;i<=N;i++){
	
	scanf("%i\n",&cob);
	scanf("%c",&A);
	if (A=='C')
		tc = tc+cob;
	if (A=='S')
		ts= ts+cob;
	if (A=='R')
		tr=tr+cob;
	}
	all = tc+tr+ts;
	printf("Total: %.0f cobaias\n",all);
	printf("Total de coelhos: %.0f\n",tc);
	printf("Total de ratos: %.0f\n",tr);
	printf("Total de sapos: %.0f\n",ts);
	printf("Percentual de coelhos: %.2f %%\n", tc/all*100);
	printf("Percentual de ratos: %.2f %%\n", tr/all*100);
	printf("Percentual de sapos: %.2f %%\n",ts/all*100);
}
