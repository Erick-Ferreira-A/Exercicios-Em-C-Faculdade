#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP
int main() {
	
	float largura;
	float comprimento;
	float area;
	float perimetro;
	
	printf ("\n");
	printf ("-------- AREA E PERIMETRO --------\n");
	printf("\n");
	printf ("Qual o comprimento do seu terreno (em metros 'm')? ");
	scanf ("%f", &comprimento);
	
	printf ("Qual a largura do seu terreno (em metros 'm')? ");
	scanf("%f", &largura);
	
	printf ("\n");
	printf ("-------- AREA --------\n");
	printf("\n");
	
	area = comprimento * largura;
	perimetro = (comprimento + largura) * 2;
	
	printf("A area do seu terreno e de %.2f metros quadrados\n", area);
	
	printf ("\n");
	printf ("-------- PERIMETRO --------\n");
	printf("\n");
	
	printf ("O perimetro so seu terreno e de %.2f metros quadrados\n", perimetro);
}


