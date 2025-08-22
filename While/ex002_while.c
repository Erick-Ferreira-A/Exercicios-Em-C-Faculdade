#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int num;
	int qtd = 1; 
	
	printf("---------- CONTAGEM ----------\n");
	
	printf("Ola, digite um numero para a contagem: ");
	
	// Verifica se a entrada e um intero valido
	if (scanf("%d", &num) != 1) {
		printf("Erro: entrada invalida. Digite apenas numeros inteiros.\n");
		return 1; // encerra o programa com erro
	}
	
	// Verifica se o numero e positivo
	if (num <= 0) {
		printf("Erro: o numero deve ser maior que zero.\n");
		return 1;
	}
	
	printf("\nIniciando contagem de 1 ate %d:\n\n",num);
	
	while (qtd <= num) {
		printf("%i\n", qtd);
		
		qtd++;
	}
	
	printf("\nContagem concluida com sucesso!\n");
	
}
