//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex010-lista04

#include <stdio.h>

int main () {
	
	int valor;
	int num = 10;
	printf("----------SAQUE----------\n");
	printf("Qual valor deseja sacar? ");
	scanf("%i", &valor);
	
	if (valor % num == 0) {
		printf("Saque AUTORIZADO.\n");
	}	else {
		printf("Valor INVALIDO para saquue.\n");
	}
	
	return 0;
}
