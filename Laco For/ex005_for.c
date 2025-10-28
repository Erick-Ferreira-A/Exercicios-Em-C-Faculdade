#include <stdio.h>

//Outubro de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//UNASP Campus SP

int main() {
	 
	 int i, n;
	 char resto;
	 
	 printf("----------- NUMEROS IMPARES ----------\n");
	 printf("Digite um numereo inteiro para a contagem dos numeros impares ate ele: ");
	 
	// lê um inteiro e tenta ler o próximo caractere
    if (scanf("%i%c", &i, &resto) != 2 || resto != '\n') {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (i < 0) {
        printf("Erro: O numero deve ser maior ou igual a 0.\n");
        return 1;
    }
	
	for (n = 0; n <= i; n++) {
		if (n % 2 != 0) {
			printf("Contegem: %i\n", n);
		}
	}
}
