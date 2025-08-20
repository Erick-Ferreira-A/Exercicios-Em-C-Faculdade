//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex012-lista04

#include <stdio.h>

int main () {

	float n1;
	
	printf("----------INTERVALO NUMERICO----------\n");
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	
	if (n1 > 0 && n1 < 100) {
		printf("Numero VALIDO.\n");
	}	else {
		printf("Fora do intervalo permitido.\n");
	}
	
	return 0;
}
