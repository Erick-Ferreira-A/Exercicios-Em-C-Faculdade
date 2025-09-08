#include <stdio.h> 

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int num1, contador = 0, i;
	
	printf("---------- CONTAGEM DE NUMEROS IMPARES ---------\n");
	
	printf("\nOla, digite apenas numeros INTEIROS para a contagem: ");
		
	if (scanf("%i", &num1) != 1 ) {
		printf("Erro: Digite apenas numeros inteiros.\n");
		return 1;
	}
	if ( num1 <= 0 ) {
		printf("Erro: O numero deve ser maior que 0.");
		return 1;
	}
	
	while (contador < num1) {
		contador++;
		
		if (contador % 2 !=0) {
			printf("%i\n", contador);
		}
	 }
	
	return 0;
	
}
