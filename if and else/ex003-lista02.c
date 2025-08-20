#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	
	float salario, salanual;
	
	printf ("\n");
	printf ("-------- SALARIO ANUAL --------\n");
	printf("\n");
	printf ("Qual o seu salario mensal (em reais R$)? ");
	scanf ("%f", &salario);
	
	printf ("\n");
	printf ("-------- SEU SALARIO ANUAL --------\n");
	printf("\n");
	
	salanual = salario * 13;
	
	printf("Seu salario anual e de R$ %.2f", salanual);
	
}


