#include <stdio.h>
void main(){
	int X,Y,i,t;
	t=0;
	scanf("%i%i",&X,&Y);
	if (X<Y){
		for (i=X+1;i<Y;i++){
			if (i%2!=0)
				t=t+i;
	}
	}
	if (Y<X){
		for (i=Y+1;i<X;i++){
			if (i%2!=0)
				t=t+i;
		}
	}
	printf("%i\n",t);
}