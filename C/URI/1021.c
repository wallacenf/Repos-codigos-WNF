#include <stdio.h>
void main (){
	double valor;
	int n100,n50,n20,n10,n5,n2;
	int m100,m50,m25,m10,m5,m1;
	int real,cent;
	scanf("%lf",&valor);
	// conversão em inteiro
	real=(int)valor;
	cent=((valor-real)*100);
	
	// notas
	n100 = real/100;
	n50 = (real%100)/50;
	n20 = (((real%100)%50)/20);
	n10 = ((((real%100)%50)%20)/10);
	n5 = (((((real%100)%50)%20)%10)/5);
	n2 = ((((((real%100)%50)%20)%10)%5)/2);
	
	// moedas
	m100 = (((((((real%100)%50)%20)%10)%5)%2)/1);
	m50 = ((cent%100)/50);
	m25 = (((cent%100)%50)/25);
	m10 = ((((cent%100)%50)%25)/10);
	m5 = (((((cent%100)%50)%25)%10)/5);
	m1 = ((((((cent%100)%50)%25)%10)%5)/1);
	
	// print
	printf("NOTAS:\n");
	printf("%i nota(s) de R$ 100.00\n",n100);
	printf("%i nota(s) de R$ 50.00\n",n50);
	printf("%i nota(s) de R$ 20.00\n",n20);
	printf("%i nota(s) de R$ 10.00\n",n10);
	printf("%i nota(s) de R$ 5.00\n",n5);
	printf("%i nota(s) de R$ 2.00\n",n2);	
	printf("MOEDAS:\n");
	printf("%i moeda(s) de R$ 1.00\n",m100);
	printf("%i moeda(s) de R$ 0.50\n",m50);
	printf("%i moeda(s) de R$ 0.25\n",m25);
	printf("%i moeda(s) de R$ 0.10\n",m10);
	printf("%i moeda(s) de R$ 0.05\n",m5);
	printf("%i moeda(s) de R$ 0.01\n",m1);
	
}