#include <stdio.h>
void main(){
	int I,J,n;
	for (n=1;n<=3;n++){
		I=1;
		J=8-n;
		printf("I=%i J=%i\n",I,J);
	}
	for (n=4;n<=6;n++){
		I=3;
		J=13-n;
		printf("I=%i J=%i\n",I,J);
	}
	for (n=7;n<=9;n++){
		I=5;
		J=18-n;
		printf("I=%i J=%i\n",I,J);
	}
	for (n=10;n<=12;n++){
		I=7;
		J=23-n;
		printf("I=%i J=%i\n",I,J);
	}
	for (n=13;n<=15;n++){
		I=9;
		J=28-n;
		printf("I=%i J=%i\n",I,J);
	}
}