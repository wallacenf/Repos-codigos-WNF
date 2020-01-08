#include <stdio.h>
void main(){
	int idade,num;
	num=0;
	float media;
	media=0;
	while(1){
		scanf("%i",&idade);
		if (idade<0)
			break;
		media+=idade;
		num+=1;
	}
	printf("%.2f\n",media/num);
}