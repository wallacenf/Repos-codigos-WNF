#include <stdio.h>
void main(){
	int hi,mi,hf,mf,ht,mt;
	scanf("%i%i%i%i",&hi,&mi,&hf,&mf);
	mt = 0;
	ht = 0;
	// h>h
	if (hf>hi && mf==mi){
		ht = hf-hi;
		mt = 0;
	}
	if (hf>hi && mf>mi){
		mt = mf-mi;
		ht = (hf-hi);
	}
	if (hf>hi && mf<mi){
		ht = (hf-hi)-1;
		mt = 60-(mi-mf);
	}
	
	//h==h
	if (hi == hf && mf>mi){
		mt = mf-mi;
		ht = 0;
	}
	if (hi == hf && mf<mi){
		mt = 60-(mi-mf);
		ht = 23;
	}
	if (hi == hf && mf==mi){
		mt = (mi-mf);
		ht = 24;
	}
	
	// h<h
	if (hf<hi && mf == mi){
		mt = 0;
		ht = ((24-hi)+hf);
	}
	if (hf<hi && mf>mi){
		ht = (24-hi)+hf;
		mt = mf-mi;
	}
	if (hf<hi && mf<mi){
		ht = ((24-hi)+hf)-1;
		mt = 60-(mi-mf);
	}
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",ht,mt);
}