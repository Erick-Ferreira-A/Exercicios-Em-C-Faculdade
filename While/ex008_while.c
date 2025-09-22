#include <stdio.h> 

	// Setembro de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP


	main() {
				
		int num1, contador = 0, x, resultado;
		
		printf("\n---------- TABUADA ----------\n");
		
		
		printf("\nOla, digite apenas numeros INTEIROS para a taduada de 1 a 10: ");
			
		if (scanf("%i", &num1) != 1 ) {
			printf("Erro: Digite apenas numeros inteiros.\n");
			return 1;
		}
		if ( num1 <= 0 ) {
			printf("Erro: O numero deve ser maior que 0.");
			return 1;
		}
		
		printf("\n---------- CALCULANDO ----------\n");
		
		while (contador <= 10) {
			resultado = contador * num1;
			printf("\n%i X %i = %i\n", contador, num1, resultado);
			
			contador++;
			
		 }
		 
		printf("\n---------- FIM DO PROGRAMA ----------\n");
		
		return 0;
	
}
