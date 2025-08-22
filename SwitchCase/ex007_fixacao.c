#include <stdio.h>

// Agosto de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo 
// RA 231430
// UNASP Campus SP

int main() {
    int numero = 0;
    int pontos = 0;

    printf("--------- SISTEMA DE PONTOS --------\n");
    puts(" 1 -> Derrota (0 pts)");
    puts(" 2 -> Empate (1 pts)");
    puts(" 3 -> Vitoria (3 pts)\n");
    
    printf("Para FINALIZAR o programa digite -1.\n");
    
    while (numero != -1) {
        printf("\nDigite o numero que representa a situacao do seu jogo (1, 2 ou 3).\n");

        if (scanf("%i", &numero) == 1) {
            if (numero == -1) {
                break; // Encerra o loop antes de cair no switch
            }

            switch (numero) {
                case 1:
                    pontos += 0;
                    break;
                case 2:
                    pontos += 1;
                    break;
                case 3:
                    pontos += 3;
                    break;
                default:
                    printf("Erro. Digite um numero que esteja no menu de opcoes.\n");
            }
        } else {
            printf("Conteudo invalido. Por favor, digite um numero disponivel no menu de opcoes.\n");

            // Limpa o buffer para evitar loop infinito
            while (getchar() != '\n');
        }
    }

    printf("Total de pontos: %i\n", pontos);

    return 0;
}

