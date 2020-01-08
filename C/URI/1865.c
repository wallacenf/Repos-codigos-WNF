#include <stdio.h>
#include <string.h>
void main(){
	int n,i,forca;
	char heroi[6];
	scanf("%i",&n);
	for (i=1;i<=n;i++){
		scanf("%s %i",&heroi,&forca);
		if (strcmp(heroi,"Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
		forca=0;
	}
		
}