//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex010-lista04

#include <stdio.h>

int main () {
	
	int idade;
	
	printf("----------ELEITOR----------\n");
	printf("Qual sua idade? ");
	scanf("%i", &idade);
	
	if (idade >= 16) {
		printf("Voce esta apto para votar, vote com consciencia.\n");
	}	else {
		printf("Voce nao esta apto para votar.\n");
	}
	
	return 0;
}
