#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	
	int n1, ant, suce;
	
	printf ("\n");
	printf ("-------- ANTECESSOR E SUCESSOR --------\n");
	printf("\n");
	printf ("Digite um numero: ");
	scanf ("%i", &n1);
	
	printf ("\n");
	printf ("-------- ANTECESSOR E SUCESSOR DO NUMERO DIGITADO--------\n");
	printf("\n");
	
	ant = n1 - 1;
	suce = n1 + 1;
	
	printf("O numero antecessor ao que foi digitado e %i \nE o numero sucessor e %i", ant, suce);
	
}


