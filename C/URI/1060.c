#include <stdio.h>
void main(){
	float n1,n2,n3,n4,n5,n6,media,d,t,c;
	scanf("%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6);
	c=0;
	t=0;
	d=0;
	
	if (n1>0){
		c = c+1;
		d = d+1;
		t = t+n1;
	}
	if (n2>0){
		c = c+1;
		d = d+1;
		t = t+n2;
	}
	if (n3>0){
		c = c+1;
		d = d+1;
		t = t+n3;
	}
	if (n4>0){
		c = c+1;
		d = d+1;
		t = t+n4;
	}
	if (n5>0){
		c = c+1;
		d = d+1;
		t = t+n5;
	}
	if (n6>0){
		c = c+1;
		d = d+1;
		t = t+n6;
	}
	media = t/d;
	
	printf("%.0f valores positivos\n",c);
	printf("%.1f\n", media);
}