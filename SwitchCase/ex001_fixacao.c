#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int nSemana;
	
	printf("--------- DIA DA SEMANA ---------\n");
	printf("Ola, digite um numero de 1 a 7:\n");
	scanf("%i", &nSemana);
	
	switch (nSemana) {
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Terca\n");
			break;
		case 4:
			printf("Quarta\n");
			break;
		case 5:
			printf("Quinta\n");
			break;
		case 6:
			printf("Sexta\n");
			break;
		case 7:
			printf("Sabado\n");
			break;
		default: // Correcao: "else" foi trocado por "default:"
        	printf("Numero invalido. Digite um numero de 1 a 7.\n");
        	break; // Opcional no default se for o ultimo, mas e boa pratica
		
	}
	
	return 0;
}
