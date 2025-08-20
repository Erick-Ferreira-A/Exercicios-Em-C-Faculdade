//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex006-lista04

#include <stdio.h>

int main () {
	
	int idade;
	
	printf("----------FAIXA ETARIA----------\n");
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	
	if (idade < 12) {
		printf("Crianca");
	}	else if (idade >= 12 && idade <= 17) {
		printf("Adolescente");
	}	else if (idade >= 18 && idade <= 59) {
		printf("Adulto");
	}	else {
		printf("Idoso");
	}
	
	return 0;
}
