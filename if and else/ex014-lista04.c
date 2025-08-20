//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex015-lista04

#include <stdio.h>

int main () {

	float ldA, ldB, ldC;
	char triangulo;
	
	printf("----------TRIANGULO----------\n");
	printf("Qual o comprimento do lado 'A' do triangulo (cm)? ");
	scanf("%f", &ldA);
	printf("Qual o comprimento do lado 'B' do triangulo (cm)? ");
	scanf("%f", &ldB);
	printf("Qual o compirmento do lado 'C' do triangulo (cm)? ");	
	scanf("%f", &ldC);
	
	 
	if (ldA == ldB && ldA == ldC) {
		printf("Este e um triangulo EQUILATERO pois possui todos os lados iguais.\n");
	}	else if (ldA == ldB || ldA == ldC || ldC == ldB) {
		printf("Este e um triangulo ISOSCELES, pois possui dois lados iguais.\n");
	}	else {
		printf("Este e um triangulo ESCALENO poispossui todos os lados diferentes.\n");
	}
	
	return 0;
}
