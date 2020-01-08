#include <stdio.h>
#include <string.h>
void main(){
	char senha[5];
while(1){
	scanf("%s",&senha);
	if (strcmp(senha,"2002")==0){
		printf("Acesso Permitido\n");
		break;
}	
	else
		printf("Senha Invalida\n");
}
}