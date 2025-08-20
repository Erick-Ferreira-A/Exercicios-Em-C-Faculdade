//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex006-lista04

#include <stdio.h>

int main () {
	
	float n1;
	
	printf("----------POSITIVO/NEGATIVO/ZERO----------\n");
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	
	if (n1 > 0) {
		printf("Numero POSITIVO");
	}	else if (n1 < 0) {
		printf("Numero NEGATIVO");
	}	else {
		printf("Numero NEUTRO");
	}
	
	return 0;
}
