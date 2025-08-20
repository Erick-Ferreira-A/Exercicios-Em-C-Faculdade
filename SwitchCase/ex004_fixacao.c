#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int nota;
	
	printf("--------- CLASSIFICADOR DE NOTAS ----------\n");
	
	printf("Digite sua nota:\n");
	// Verifica se scanf retornou 1 (leu 1 item com sucesso)
	if (scanf("%i", &nota) == 1) {
	
		switch (nota) {
			
			case 0 ... 4:
				printf("Classificacao: RUIM\n");
				break;
			case 5 ... 7: 
				printf("Classificacao: REGULAR\n");
				break;
			case 8 ... 10: 
				printf("Classificacao: OTIMA\n");
				break;
			default: 
				printf("Nota invalida. Por favor, digite uma nota entre 0 e 10.\n");
				break;
		}
			
	} else {
		// Se scanf nao retornou 1, o usuario nao digitou um numero valido.
		printf("Entrada invalida. Voce deve digitar um numero inteiro.\n");
	}
	
	return 0;
	
}
