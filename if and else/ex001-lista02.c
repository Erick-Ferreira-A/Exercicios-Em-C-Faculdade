#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	
	int qtd;
	float valor;
	
	printf ("-------- CAIXA --------\n");
	printf ("Qual o valor desse produto?  ");
	scanf ("%.2f", &valor);
	
	printf ("Qual foi qauntidade que voce pegou? ");
	scanf("%i", &qtd);
	
	valor = valor * qtd;
	
	printf("O total que voce deve pagar e %.2f", valor);
}


