//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430

#include <stdio.h>

int main () {
	
	float precoini, desc;
	
	printf("----------DESCONTO----------\n");
	printf("Qual o preco do produto? (R$)");
	scanf("%f", &precoini);
	
	if (precoini < 50) {
		printf("Sem desconto");
	}	else if (precoini >=50 && precoini < 100) {
		desc = precoini * 0.9;
		printf("O produto tem um desconsto de 10%% e sai por R$ob%.2f", desc);
	}	else {
		desc = precoini * 0.8;
		printf("O produto tem um desconto de 20%% e sai por R$%.2f", desc);
	}
	
	return 0;
}
