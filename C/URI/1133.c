#include <stdio.h>
void main(){
	int x,y,i;
	scanf("%i%i",&x,&y);
	if (x<y){
		for (i=x+1;i<y;i++){
			if (i%5==2 || i%5==3)
				printf("%i\n",i);
		}
	}
	if (y<x){
		for (i=y+1;i<x;i++){
			if (i%5==2 || i%5==3)
				printf("%i\n",i);
		}
	}
}