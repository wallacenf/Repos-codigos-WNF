#include <stdio.h>
#include <string.h>

void main(){
	char col[20],tipo[20],ali[20];
	scanf("%s",&col);
	scanf("%s",&tipo);
	scanf("%s",&ali);
	
	if (strcmp(col,"vertebrado") == 0){
		if (strcmp(tipo,"ave")==0){
			if (strcmp(ali,"carnivoro")==0)
				printf("aguia\n");
			if (strcmp(ali,"onivoro")==0)
				printf("pomba\n");
		}
		else if (strcmp(tipo,"mamifero")==0){
			if (strcmp(ali,"onivoro")==0)
				printf("homem\n");
			if (strcmp(ali,"herbivoro")==0)
				printf("vaca\n");
		}
	}
	if (strcmp(col,"invertebrado")==0){
		if (strcmp(tipo,"inseto")==0){
			if (strcmp(ali,"hematofago")==0)
				printf("pulga\n");
			if (strcmp(ali,"herbivoro")==0)
				printf("lagarta\n");
		}
	else if (strcmp(tipo,"anelideo")==0){
		if (strcmp(ali,"hematofago")==0)
			printf("sanguessuga\n");
		if (strcmp(ali,"onivoro")==0)
			printf("minhoca\n");
	}
	}

}