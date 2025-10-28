#include <stdio.h>

//Outubro de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//UNASP Campus SP

int main () {
	
	int i, n;
	
	printf("----------- CONTEGEM ----------\n");
	printf("Digite um numero inteiro para a contagem: ");
	
	if (scanf("%i", &i) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (i < 0) {
        printf("Erro: O numero deve ser maior ou igual a 0.\n");
        return 1;
    }
    
    for(n = 1; n <= i; n++) {
    	printf("Contagem: %i\n", n);
	}
	
	return 0;
}
