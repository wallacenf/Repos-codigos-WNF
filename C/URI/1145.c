#include <stdio.h>
void main(){
	int x,y,i;
	scanf("%i%i",&x,&y);
	for (i=1;i<=y;i++){
		if (i%x==0)
		printf("%i\n",i);
		else
		printf("%i ",i);
	}
		
}