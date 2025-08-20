//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex012-lista04

#include <stdio.h>

int main () {
	
	char nome[50];
	float frequencia;
	printf("----------FREQUENCIA----------\n");
	printf("Digite o nome do aluno: ");
	scanf(" %[^\n]", nome);
	printf("Digite a frequencia do aluno (0 a 100%%): ");
	scanf("%f", &frequencia);
	
	printf("Aluno: %s\n", nome);
	
	if (frequencia < 75) {
		printf("REPROVADO por falta.\n");
	}	else {
		printf("Frenquencia ADEQUADA.\n");
	}
	
	return 0;
}
