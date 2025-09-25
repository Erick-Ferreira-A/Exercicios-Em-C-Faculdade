#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main() {


int numero_secreto, palpite;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    numero_secreto = rand() % 100 + 1;

    printf("=== Jogo da Adivinhacao ===\n");
    printf("Tente adivinhar o número secreto entre 1 e 100!\n");

    // Laço principal do jogo
    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite > numero_secreto) {
            printf("Muito alto!\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo!\n");
        } else {
            printf("Parabens, voce acertou!\n");
            break; // Sai do laço
        }
    }

    return 0;
    
}
