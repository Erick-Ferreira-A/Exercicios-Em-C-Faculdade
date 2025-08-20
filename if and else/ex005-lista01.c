#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {

	float n1, n2, soma;
	
	printf ("----- SOMA DOBRO -----\n");
	printf ("Digite o primeiro numero: ");
	scanf ("%f", &n1);
	
	printf ("Digite o segundo numero: ");
	scanf ("%f", &n2);
	
	soma = n1 + (n2+n2);
	
	printf (" Soma do primeiro numero com o dobro do segundo e %.2f", soma);
	
	return 0;
}


