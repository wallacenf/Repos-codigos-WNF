#include <stdio.h>
void main(void){
	float sal,ir,f1,f2,f3;
	scanf("%f",&sal);
	f1=0;
	f2=0;
	f3=0;
	
	if (sal >2000 && sal<=3000)
		f1 = sal-2000;
	else if (sal>3000 && sal<=4500){
		f2 = (sal-3000);
		f1 = (sal-f2)-2000;
	}
	else if (sal>4500){
		f3 = sal-4500;
		f2 = sal-f3-3000;
		f1 = sal-f3-f2-2000;
	}
	
	ir = f1*0.08 + f2*0.18 + f3*0.28;
	if (sal<2000)
		printf("Isento\n");
	else 
		printf("R$ %.2f\n",ir);
	
}