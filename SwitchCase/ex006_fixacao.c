#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	char combustivel;
	
	printf("---------- TIPO DE COMBUSTIVEL ----------\n");
	
	puts(" A -> Alcool");
	puts(" G -> Gasolina");
	puts(" D -> Diesel\n");
	
	printf("Ola, digite o tipo de combustivel abastecido (A/G/D):\n");
	
	if(scanf(" %c", &combustivel) == 1) { // ESPACO ANTES DO " %c"  CONFERE SE O VALOR DA VARIAVEL combustivel e == 1
	
		if ( combustivel == 'A' || combustivel == 'a' ||
			 combustivel == 'G' || combustivel == 'g' ||   // CONFERE SE O CARECTER DIGITATO FOI UMA LETRA DO MENU
			 combustivel == 'D' || combustivel == 'd' ) {
		
			switch (combustivel) {
				
				case 'A': case 'a':
					printf("Resultado: Alcool");
					break;
				case 'G': case 'g':
					printf("Resultado: Gasolina");
					break;
				case 'D': case 'd':
					printf("Resultado: Diesel");
					break;
				default:
					printf("Conteudo invalido. Por favor, digite uma letra que esteja disponivel no menu.\n");
					break;
			}
		
	}	else {
			printf("Erro. Por favor, digite uma letra que esteja disponivel no menu.\n");
		}
		
	} 	else {
			printf("Erro na leitura da entrada.\n");
		}
	
	return 0;
	
}
