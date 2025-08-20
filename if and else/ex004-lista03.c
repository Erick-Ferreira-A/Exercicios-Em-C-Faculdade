//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430

#include <stdio.h>

int main () {
	
	int n1, resto;
	int n2 = 2;
	
	printf("----------PAR/IMPAR----------\n");
	printf("Digite um numero: ");
	scanf("%i", &n1);
	
	resto = n1 % n2;
	
	if (resto == 0) {
		printf("O numero e PAR");
	}	else {
		printf("O numero e IMPAR");
	}
	
	return 0;
}
