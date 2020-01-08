#include <stdio.h>
#include <math.h>

void main(){
	double A,B,C,delta,R1,R2;
	
	scanf("%lf%lf%lf", &A,&B,&C);
	delta = sqrt(B*B-4*A*C);
	if (A==0 || (B*B-4*A*C)<0)
		printf("Impossivel calcular\n");
	else{
		R1 = ((-B+delta)/(2*A));
		R2 = ((-B-delta)/(2*A));
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
	
}