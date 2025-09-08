#include <stdio.h> 

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int num1 = 0, soma = 0;
	
	printf("---------- SOMATORIO ---------\n");
	
	printf("\nOla, digite apenas numeros INTEIROS para a soma: ");
		
	if (scanf("%d", &num1) != 1 ) {
		printf("Erro: Digite apenas numeros inteiros.\n");
		return 1;
	}
	if ( num1 <= 0 ) {
		printf("Erro: O numero deve ser maior que 0.");
		return 1;
	}
	
	while (num1 > 0) {
	 	 
	 	 soma += num1;
		 printf("\nDigite o proximo numero. Se for o caso, digite 0 para finalizar o programa.:\n");
		 scanf("%i", &num1);	 	
	 	
	 }
	 
	printf("\n----- SOMANDO VALORES DIGITADOS -----\n");
	printf("\nA soma do numeros digitados e %i\n", soma);
	printf("\n----------PROGRAMA FINALIZADO---------\n");
	
	return 0;
	
}
