#include <stdio.h>
#include <math.h>

void main(){
	int x,y,n,e,r,b,c;
	scanf("%i",&e);

	for (n=1;n<=e;n++){
		scanf("%i%i", &x,&y);
		r = 9*x*x+(y*y);
		b = 2*x*x+pow((5*y),2);
		c = -100*x+pow(y,3);
		
		if (r>b && r>c)
			printf("Rafael ganhou\n");
		if (b>r && b>c)
			printf("Beto ganhou\n");
		if (c>r && c>b)
			printf("Carlos ganhou\n");
	}
		
}