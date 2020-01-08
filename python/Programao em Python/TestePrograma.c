/* Programa: PROGRAMAO DO EDY
Autor : Edgar Augusto Steffen - FATEC Sorocaba
Data : 1° semestre de 2019 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main() {
	
	int prog, p_cod, cparcela, w, par, impar, qtdboi, Boipeso, iEst, jAlt, eBase, l_cod, quant, num[10], i, maior, Mtotal, gordo = 0, magro = 9999, filhos=0, mulher=0;
	float C, F, peso, altura, imc, preco, tpreco, parcela, total, media, salario=0, salarioT=0, maiorSal=0, mediaFilhos=0, mediaSal=0, filhosT=0;
	char rept, sexo[1];
	
	setlocale(LC_ALL, "");
	menu:
	
	do {
		system("cls");
		printf("\n---- Bem-Vindo ao PROGRAMÃO ----\n\n");
		printf(" 1 - Temperatura\n");
		printf(" 2 - IMC\n");
		printf(" 3 - Prestações\n");
		printf(" 4 - Pesqiusa prefeitura\n");
		printf(" 5 - Números pares\n");
		printf(" 6 - Números ímpares decrescentes\n");
		printf(" 7 - Peso do boi\n");
		printf(" 8 - Estrelinhas\n");
		printf(" 9 - Lanchonete\n");
		printf(" 10 -10 números\n\n");
		
		printf(" 0 - Sair do programa\n\n");
		printf("-------------------------------\n\n");
		
		printf(" Escolha uma opção: ");
		scanf("%d", &prog);
				
		switch(prog) {

			case 1:
				do {
					system("cls");
					printf("\n---- CONVERSÃO DE CELCIUS PARA FARENHEIGHT ----\n\n");
					printf(" Digite a temperatura em °C: ");
					scanf("%f", &C);
		
					F = ((9 * C + 160)/5);
		
					printf("\n %.1f°C é igual a %.1f°F \n\n", C, F);
					
					printf("-----------------------------------------------\n");
					printf("\n Executar o programa novamente (s/n): ");
					scanf(" %c", &rept);
				}
				while(rept == 's');
				
				if(rept == 'n') {
					goto menu;
				}
			break;

			case 2:
				do {
					system("cls");
					printf("\n---- CALCULO DE IMC ----\n\n");
					printf(" Primeiramente, informe seu peso: ");
					scanf("%f", &peso);
					printf(" Agora informe sua altura: ");
					scanf("%f", &altura);
					
					imc = (peso /(altura * altura));
					
					printf("\n Seu IMC foi de %.2f\n\n", imc);
					
					if (imc <= 18.5) {
						printf(" IMC até 18.5, você está abaixo do peso ideal\n\n"); 
					}
					else if (imc > 18.5 && imc <= 25) {
						printf(" IMC de 18,5 até 25, você está no peso ideal\n\n");
					}
					else if (imc > 25 && imc <= 30) {
						printf(" IMC de 25 até 30, você está acima do peso ideal\n\n");
					}
					else {
						printf(" IMC acima de 30, você está com obesidade\n\n");
					}
					
					printf("------------------------\n");
					printf("\n Executar o programa novamente (s/n): ");
					scanf(" %c", &rept);
				}
				while(rept == 's');
				
				if(rept == 'n') {
					goto menu;
				}
			break;

			case 3:
				do {
					system("cls");
					printf("\n---- CALCULO DE PARCELAMENTO ----\n\n");
					printf(" Informe o preço do produto: R$ ");
					scanf("%f", &preco);
					
					ProgParcela:
					system("cls");
					printf("\n---- CALCULO DE PARCELAMENTO ----\n\n");
					printf(" Valor do produto: R$%.2f", preco);
					printf("\n\n OPÇÕES DE PRESTAÇÕES \n\n 1 - Pagamento à vista e 30%% de desconto \n 2 - Parcelamento em 2x e 20%% de desconto \n 3 - Parcelamento em 3x e 10%% de desconto \n 4 - Mais opções de parcelamento\n\n");
					printf(" Infome o código referente do produto: ");
					scanf("%d", &p_cod);
					
					switch (p_cod) {
						
						case 1:
							tpreco = (preco - (preco * 0.3));
							printf("\n Pagamento à  vista com desconto de 30%%");
							printf("\n Total a pagar é de R$%.2f\n", tpreco);
							break;
							
						case 2:
							tpreco = (preco - (preco * 0.2));
							parcela = tpreco / 2;
							printf("\n Pagamento em 2x com desconto de 20%%");
							printf("\n Total a pagar é de R$%.2f e cada prestação de R$%.2f\n", tpreco, parcela);
							break;
							
						case 3:
							tpreco = (preco - (preco * 0.1));
							parcela = tpreco / 3;
							printf("\n Pagamento em 3x com desconto de 10%%");
							printf("\n Total a pagar é de R$%.2f e cada prestação de R$%.2f\n", tpreco, parcela);
							break;
							
						case 4:
							if_parcela:
							system("cls");
							printf("\n---- CALCULO DE PARCELAMENTO ----\n\n");
							printf(" Valor do produto: R$%.2f", preco);
							printf("\n\n Parcelamentos sem descontos");
							printf("\n 4x sem desconto, 5x sem desconto ou 6x sem desconto");
							printf("\n\n Vezes que será parcelado: ");
							scanf("%d", &cparcela);
							
							if (cparcela == 4) {
								parcela = preco / 4;
								printf("\n Pagamento em 4x sem desconto\n");
								printf(" Total a pagar é de R$%.2f e cada prestação de R$%.2f\n", preco, parcela);
							}
							
							else if (cparcela == 5) {
								parcela = preco / 5;
								printf("\n Pagamento em 5x sem desconto\n");
								printf(" Total a pagar é de R$%.2f e cada prestação de R$%.2f\n", preco, parcela);
							}
							
							else if (cparcela == 6) {
								parcela = preco / 6;
								printf("\n Pagamento em 6x sem desconto\n");
								printf(" Total a pagar é de R$%.2f e cada prestação de R$%.2f\n", preco, parcela);
							}
							
							else {
								printf("\n\n Parcelamento não aplicavel");
								getche();
								goto if_parcela;
							}
							break;
							
						default:
							printf("\n\n Opção de prestação inexiste");
							getche();
							goto ProgParcela;
					}

					printf("---------------------------------\n");
					printf("\n Executar o programa novamente (s/n): ");
					scanf(" %c", &rept);
				}
				while(rept == 's');
				
				if(rept == 'n') {
					goto menu;
				}
			break;

			case 4:
				/*do{
					system("cls");
					printf("---- PESQUISA DE POPULAÇÃO PREFEITURA ----\n\n");
					printf("Informe seu sexo, Masculino (M) - Feminino (F): ");
					scanf(" %c", &sexo);
					printf("Digite o valor do seu salário: ");
					scanf("%f", &salario);
					printf("Quantos filhos tem: ");
					scanf("%d", &filhos);
					
					while (salario > 0) {
						salarioT = salarioT + salario;
						filhosT = filhosT + filhos;
						
						maiorSal = 0;
						if (salario > maiorSal) {
							maiorSal = salario;
						}
						
						if (sexo == "f" && salario <= 900) {
							mulher++;
						}

						w++;
					}
					
					mediaSal = salarioT / w;
					mediaFilhos = filhosT / w;
					
					printf("\n");
					printf("Média de salário da população: R$ %.2f\n", mediaSal);
					printf("Média de filhos da população: %.0f filhos\n", mediaFilhos);
					printf("Maior salário pesquisado: R$ %.2f\n", maiorSal);
					printf("Números de mulheres com salarios acima de R$ 900,00: %.2f\n", mulher);

					printf("\nExecutar o programa novamente (s/n): ");
					scanf(" %c", &rept);
				}
				while(rept == 's');
				
				if(rept == 'n') {
					goto menu;
				}*/
				system("cls");
				printf("\n     ------------------------------------------------");
				printf("\n     ---- ESTE PROGRAMA AINDA ESTÁ EM CONSTRUÇÃO ----");
				printf("\n     ----------- POR FAVOR, ESCOLHA OUTRO -----------");
				printf("\n     ------------------------------------------------");
				getche();
				goto menu;
			break;

			case 5:
				system("cls");
				printf("\n---- Números pares num intervalo de 0 até 20 ----\n\n");
				
				for (par = 0; par <= 20; par++){
					if (par % 2 == 0){
						printf(" %d ", par);
					}
				}

				printf("\n\n-------------------------------------------------");

				getche();
				//goto texto1;
			break;

			case 6:
				system("cls");
				printf("\n----- Números impares num intervalo de 10 até 30 -----\n");
				printf("--------    Mostrados de forma decrescente    --------\n\n");
				
				for (impar = 30; impar >= 10; impar--){
					if (impar % 2 != 0){
						printf(" %d ", impar);
					}
				}

				printf("\n\n------------------------------------------------------");

				getche();
				//goto texto2;
			break;

			case 7:
				do {
					system("cls");
					printf("--- DE 10 BOIS, O MAIS PESADO ---")
					for (qtdboi = 1; qtdboi < 11; qtdboi++){
						printf("Infome o peso do boi n°%d: ", qtdboi);
						scanf("%d", &Boipeso);
						
						if (Boipeso > gordo) {
							gordo = Boipeso;
						}
						
						if (Boipeso < magro) {
							magro = Boipeso;
						}
					}
					
					printf("\nO boi mais pesado tem %dKG e o mais leve tem %dKG", gordo, magro);
					printf("\n\n");

					printf("\nExecutar o programa novamente (s/n): ");
					scanf(" %c", &rept);
				}
				while(rept == 's');
				
				if(rept == 'n') {
					goto menu;
				}
			break;

			case 8:
				//system("cls");
				printf("Quantas estrelinhas? ");
				scanf("%d", &eBase);
				printf("\n");
				
				printf("Base com %d estrelinhas\n", eBase); 
				printf("\n");
				
				for (jAlt = 1; jAlt <= eBase; jAlt++) {
					for (iEst = 1; iEst <= jAlt; iEst++) {
						printf("*") ;
					}
				printf("\n"); 
				}
			break;

			case 9:
				{
				//system("cls");
				do {
					system("cls");
					printf("Qual lanche tu quer cara?\n");
					printf("1 - Misto quente: R$2,50\n");
					printf("2 - Cachorro quente: R$3,00\n");  
					printf("3 - Hamburger simples: R$3,50\n");
					printf("4 - X-Egg: R$4,00\n");
					printf("5 - X-Tudo: R$5,00\n");
					printf("6 - Total a pagar e sair\n\n");
					
					printf("Qual opÃ§Ã£o tu deseja: ");
					scanf("%d", &l_cod);
					
					switch  (l_cod) {
						
						case 1:
							printf("\nQuantos lanches tu quer cara? ");
							scanf("%d", &quant);
							total = total + (quant * 2.5);
							break;
							
						case 2:
							printf("\nQuantos lanches tu quer cara? ");
							scanf("%d", &quant);
							total = total + (quant * 3);
							break;
							
						case 3:
							printf("\nQuantos lanches tu quer cara? ");
							scanf("%d", &quant);
							total = total + (quant * 3.5);
							break;
							
						case 4:
							printf("\nQuantos lanches tu quer cara? ");
							scanf("%d", &quant);
							total = total + (quant * 4);
							break;
							
						case 5:
							printf("\nQuantos lanches tu quer cara? ");
							scanf("%d", &quant);
							total = total + (quant * 5);
							break;
							
						case 6:
							printf("\nTotal Ã  pagar: R$%.2f\n", total);
							break;
							
						default:
							printf("\nOpÃ§Ã£o nÃ£o existente!\n\n"); 
					}
				}
				while (l_cod < 6);
			}
			break;

			case 10:					
				for (i = 0; i < 10; i++){
					printf("Digite o valor do %dÂ° nÃºmero: ", i+1);
					scanf("%d", &num[i]);
				}
				printf("\n");
				
				maior = 0;
				for (i = 0; i < 10; i++){
					if (num[i] > maior) {
						maior = num[i];
					}
				}
				
				Mtotal = 0;
				for (i = 0; i < 10; i++){
					Mtotal = Mtotal + num[i];
				}
				
				media = Mtotal / 10.0;
				
				printf("O maior número digitado foi: %d\n", maior);
				printf("A média dos números digitados foi: %.2f\n\n", media);
			break;

			case 0:
				system("cls");
				printf("----------------\n");
				printf("|    BYE BYE   |\n");
				printf("----------------");
				getche();
				return 0;
				
			default:
				printf("\n----------------------------\n|    OPÇÃO NÃO EXISTENTE   |\n----------------------------");
				getche();
				goto menu;
		}
		printf("");
		scanf("% c", rept);
	}
	while (rept == 's');
	
	/*texto1:
		system("cls");
		getche();
		system("cls");
		printf("\n--> Sim, é só isso.");
		getche();
		system("cls");
		printf("\n--> Um programa que conta os números pares de 0 até 20.");
		getche();
		system("cls");
		getche();
		goto texto3;

	texto2:
		system("cls");
		getche();
		system("cls");
		printf("\n--> Sim, é só isso.");
		getche();
		system("cls");
		printf("\n--> Um programa que conta os ímpares de 10 até 30 de forma decrescente.");
		getche();
		system("cls");
		getche();
		goto texto3;
		
	texto3:
		system("cls");
		printf("\n--> Que foi, achou que teria algo mais interessante?");
		getche();
		system("cls");
		getche();
		system("cls");
		printf("\n--> Esse programa não é interessante para você?");
		getche();
		system("cls");
		printf("\n--> O que mais você quer que eu faça?");
		getche();
		system("cls");
		printf("\n--> Tem mais opções para você escolher, fique a vontade e escolha outro.");
		getche();
		system("cls");
		getche();
		system("cls");
		printf("\n--> Tenha uma boa diverção.");
		getche();
		system("cls");
		getche();
		system("cls");
		printf("\n ?");
		getche();
		system("cls");
		printf("\n ??");
		getche();
		system("cls");
		printf("\n ???");
		getche();
		system("cls");
		getche();
		system("cls");
		printf("\n--> Ah, você queria voltar pro menu?");
		getche();
		system("cls");
		printf("\n--> Desculpa, vou te mandar pra lá.");
		getche();
		system("cls");
		printf("\n-----------------");
		printf("\n----- MENU ------");
		printf("\n| Opção 1       |");
		printf("\n| Opção 2       |");
		printf("\n| Opção 3       |");
		printf("\n| Opção 4       |");
		printf("\n| Opção 5       |");
		printf("\n-----------------");
		printf("\n\n Escolha uma opição:");
		getche();
		system("cls");
		getche();
		system("cls");
		printf("\n ?");
		getche();
		system("cls");
		printf("\n ??");
		getche();
		system("cls");
		printf("\n ???");
		getche();
		system("cls");
		printf("\n ????");
		getche();
		system("cls");
		printf("\n ?????");
		getche();
		system("cls");
		printf("\n--> Não era esse o menu que você queria?");
		getche();
		system("cls");
		printf("\n--> Dificil te agradar hein!?");
		getche();
		system("cls");
		printf("\n--> Tá, tá, okay.");
		getche();
		system("cls");
		printf("\n--> Vou te mandar para lá.");
		getche();
		system("cls");
		getche();
		printf("\n----- NÃO ESCOLHA MAIS ESSA OPÇÃO -----");
		getche();
		goto menu;*/

	system("pause");
	return 0;
}
