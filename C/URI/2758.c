#include <stdio.h>
void main(){
	float s1,s2;
	double d1,d2;
	scanf("%f",&s1);
	scanf("%f",&s2);
	scanf("%lf",&d1);
	scanf("%lf",&d2);
	printf("A = %f, B = %f\n",s1,s2);
	printf("C = %lf, D = %lf\n",d1,d2);
	printf("A = %.1f, B = %.1f\n",s1,s2);
	printf("C = %.1lf, D = %.1lf\n",d1,d2);
	printf("A = %.2f, B = %.2f\n",s1,s2);
	printf("C = %.2lf, D = %.2lf\n",d1,d2);
	printf("A = %.3f, B = %.3f\n",s1,s2);
	printf("C = %.3lf, D = %.3lf\n",d1,d2);
	printf("A = %.3E, B = %.3E\n",s1,s2);
	printf("C = %.3E, D = %.3E\n",d1,d2);
	printf("A = %.0f, B = %.0f\n",s1,s2);
	printf("C = %.0lf, D = %.0lf\n",d1,d2);
}