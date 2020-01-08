#include <stdio.h>
void main(){
	int N,x,y,i,j,t;

	scanf("%i",&N);
	for (i=1;i<=N;i++){
		scanf("%i%i",&x,&y);
		t=0;
		if (x<y){
		for(j=x+1;j<y;j++)
			if (j%2!=0)
				t= t+j;
			}
		if (y<x){
			for (j=y+1;j<x;j++){
				if (j%2!=0)
				t=t+j;
				}
				
		}
		printf("%i\n",t);	
	}
		
}