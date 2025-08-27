#include <stdio.h> 

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main () {
	
	int soma = 0, i = 0;
	
	printf("---------- SOMA DOS 10 PRIMEIROS NUMEROS -----------\n");
	printf("\nIniciando a soma:\n");
	
	while (i <= 10 ) {
		
		soma += i;
		i++;	
		
	}
	
	printf("\nA soma dos 10 primeiros numeros e: %i", soma);
	
	return 0;
	
}
