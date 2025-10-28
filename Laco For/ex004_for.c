#include <stdio.h>

//Outubro de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//UNASP Campus SP

int main() {
	
	int i;
	int soma = 0;
	
	printf("---------- SOMA ----------\n");
	
	for (i = 0; i <=10; i++) {
		soma += i;
	}
	
	printf("\nA soma dos numeros ate 10 e: %i\n", soma);
	
	return 0;
}
