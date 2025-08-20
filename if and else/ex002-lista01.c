#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	float n1, n2, n3, m;
	
	printf ("----- MEDIA -----\n");
	printf ("Digite o primeiro numero: ");
	scanf ("%f", &n1);
	printf ("Digite o segundo numero: ");
	scanf ("%f", &n2);
	printf ("Digite o terceiro numero: ");
	scanf ("%f", &n3);
	m = (n1 + n2 + n3) / 3;
	printf("O resultado da operacao e %.2f", m);
}


