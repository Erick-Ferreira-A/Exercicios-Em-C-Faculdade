#include <stdio.h> 

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	float num1 = 0, soma = 0, media = 0;
	int i = 0;
	
	printf("---------- MEDIA SEM CONTAR 0 ---------\n");
	
	printf("\nOla, digite apenas numeros INTEIROS para o calculo da media: ");
		
	if (scanf("%f", &num1) != 1 ) {
		printf("Erro: Digite apenas numeros inteiros.\n");
		return 1;
	}
	if ( num1 <= 0 ) {
		printf("Erro: O numero deve ser maior que 0.");
		return 1;
	}
	
	while (num1 > 0) {
	 	 
	 	 soma += num1;
	 	 i++;
		 printf("\nDigite o proximo numero. Se for o caso, digite 0 para finalizar o programa.:\n");
		 scanf("%f", &num1);
	 }
	 
	 	 media = soma / i;
	 
	printf("\n----- CALCULANDO A MEDIA DOS VALORES DIGITADOS -----\n");
	printf("\nA media do numeros digitados e %.2f\n", media);
	printf("\n----------PROGRAMA FINALIZADO---------\n");
	
	return 0;
	
}
