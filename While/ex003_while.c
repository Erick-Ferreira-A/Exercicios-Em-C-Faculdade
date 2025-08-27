#include <stdio.h>

int main (){
	
	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP
	
	int numero;
	
	printf("---------- CONTAGEM REGRESSIVA ----------\n");
	printf("Ola, digite um numero para contagem regressiva: ");
	
	if (scanf("%d", &numero) != 1 ) {
		printf("Erro: Digite apenas numeros inteiros.\n");
		return 1;
	}
	if ( numero <= 0 ) {
		printf("Erro: O numero deve ser maior que 0.");
		return 1;
	}
	
	if ( numero > 1000000 ) {
		printf("Erro: Numero muito extenso para a contagem. Digite um numero menor que 1.000.000");
		return 1;
	}
	
	printf("\nIniciando contagem regressiva de %i:\n\n",numero);
	
	while ( numero >= 0 ) {
		printf("%d\n", numero);
	
		numero--;
	}
	
	printf("\nContagem concluida com sucesso!\n");
	
	return 0;
	
}
