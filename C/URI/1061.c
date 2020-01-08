#include <stdio.h>
void main(){
	int d1,hi,mi,si,d2,hf,mf,sf,seg1,seg2,tempo;
	char lixo;
	
	scanf("Dia %i",&d1);
	scanf("%i : %i : %i\n",&hi,&mi,&si);
	scanf("Dia %i",&d2);
	scanf("%i : %i : %i\n",&hf,&mf,&sf);
	
	
	seg1 = d1*86400+hi*3600+mi*60+si;
	seg2 = d2*86400+hf*3600+mf*60+sf;
	tempo = seg2-seg1;
	
	printf("%i dia(s)\n",tempo/86400);
	tempo = tempo%86400;
	printf("%i hora(s)\n", tempo/3600);
	tempo = tempo%3600;
	printf("%i minuto(s)\n",tempo/60);
	tempo = tempo%60;
	printf("%i segundo(s)\n",tempo);
}