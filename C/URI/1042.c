#include <stdio.h>
void main(){
	int a,b,c;
	scanf("%i%i%i",&a,&b,&c);
	// primeiro valor(menor)
	if (a<b && a<c)
		printf("%i\n", a);
	if (b<a && b<c)
		printf("%i\n", b);
	if (c<a && c<b)
		printf("%i\n", c);
	
	// segundo valor
	if (a>b && a<c || a>c && a<b)
		printf("%i\n", a);
	if (b>a && b<c || b>c && b<a)
		printf("%i\n", b);
	if (c>a && c<b || c>b && c<a)
		printf("%i\n", c);
	
	// terceiro valor
	if (a>b && a>c)
		printf("%i\n", a);
	if (b>a && b>c)
		printf("%i\n", b);
	if (c>a && c>b)
		printf("%i\n", c);
	
	// ultima sequencia
	printf("\n%i\n%i\n%i\n",a,b,c);
		
}