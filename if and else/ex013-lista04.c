//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex014-lista04

#include <stdio.h>

int main () {

	char nome[50];
	int idade;
	
	printf("----------DIRIGIR----------\n");
	printf("Qual seu nome? ");
	scanf("%[^\n]", nome);
	printf("Qual sua idade? ");
	scanf("%i", &idade);
	printf("Prezado %s,\n", nome);	
	
	if (idade >= 18) {
		printf("Voce esta APTO a dirigir, parabens.\n", nome);
	}	else {
		printf("Voce NAO esta apto a dirigir.\n");
	}
	
	return 0;
}
