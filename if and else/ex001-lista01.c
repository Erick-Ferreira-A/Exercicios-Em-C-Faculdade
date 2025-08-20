#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	int idade;
	
	printf ("----- MESES VIVIDOS -----\n");
	printf ("Quantos anos voce tem?  ");
	scanf ("%i", &idade);
	
	idade = idade * 12;
	
	printf("A quantidade de meses que voce viveu e %i", idade);
}


