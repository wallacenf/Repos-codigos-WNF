#include <stdio.h>
void main(){
	float sal,reaj;
	scanf("%f",&sal);
	
	if (sal <= 400)
		reaj = 0.15;
	if (sal > 400 && sal<=800)
		reaj = 0.12;
	if (sal >800 && sal <=1200)
		reaj = 0.1;
	if (sal>1200 && sal<= 2000)
		reaj = 0.07;
	if (sal>2000)
		reaj = 0.04;
	printf("Novo salario: %.2f\n", sal + sal*reaj);
	printf("Reajuste ganho: %.2f\n",reaj*sal);
	printf("Em percentual: %.0f %\n", reaj*100);	
}