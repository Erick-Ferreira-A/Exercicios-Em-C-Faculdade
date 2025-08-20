#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int nOpcao, nUnidade, resultado;
	
	printf("--------- CONVERSOR DE UNIDADES ---------\n");
	printf("\n");
	puts(" - 1 km para metros");
	puts(" - 2 m para centimetros");
	puts(" - 3 cm para milimetros\n");
	
	printf("Escolha uma opcao para a conversao:\n");
	
	if (scanf("%i", &nOpcao) == 1 ) {
		
		switch (nOpcao) {
			
			case 1: 
				printf("Digite o valor em km:\n");
				
					if (scanf("%i", &nUnidade) == 1) {
						resultado = nUnidade * 1000;
						printf("Resultado: %i m", resultado);
					}   else {
							printf("Entrada invalida. Voce deve digitar um numero inteiro.\n");
					}
				break;
					
			case 2: 
				printf("Digite o valor em m (metros):\n");
				
					if (scanf("%i", &nUnidade) == 1) {
					 	resultado = nUnidade * 100;
					 	printf("Resultado: %i cm", resultado);
					}   else {
					 		printf("Entrada invalida. Voce deve digitar um numero inteiro.\n");
					}
				break;
					
			case 3:
				printf("Digite o valor em cm (centimetros):\n");
				
					if (scanf("%i", &nUnidade) == 1) {
						resultado = nUnidade * 10;
						printf("Resultado: %i mm", resultado);
					}   else {
						  	printf("Entrada invalida. Voce deve digitar um numero inteiro.\n");
					}
				break;
				
			default:
				printf("Numero invalido. Por favor, digite um numero que esteja disponivel no menu de escolhas.");
						
		}
		
	}	else {
			printf("Entrada invalida. Voce deve digitar um numero inteiro.\n");
	}
}
