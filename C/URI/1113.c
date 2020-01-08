#include <stdio.h>
void main(){
	int i,x,y;
	while(1){
		scanf("%i%i",&x,&y);
		if (x==y)
			break;
		if (x>y)
			printf("Decrescente\n");
		if (y>x)
			printf("Crescente\n");
	}
}