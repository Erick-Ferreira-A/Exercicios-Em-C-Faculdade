#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	
	float compra, troco, pago;
	
	printf ("\n");
	printf ("-------- TROCO --------\n");
	printf("\n");
	printf ("Digite o valor da compra do cliente: ");
	scanf ("%f", &compra);
	printf ("Digite o valor pago pelo cliente: ");
	scanf ("%f", &pago);
	
	printf ("\n");
	printf ("-------- TROCO--------\n");
	printf("\n");
	
	troco = pago - compra; 
	
	printf("O troco devera ser de R$ %.2f", troco);
	
}


