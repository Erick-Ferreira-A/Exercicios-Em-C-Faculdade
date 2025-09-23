#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
    int n;
    int fat = 1;

    printf("\n---------- FATORIAL ----------\n");
    printf("Digite um numero inteiro positivo para calcular o fatorial: ");

    if (scanf("%i", &n) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (n < 0) {
        printf("Erro: O numero deve ser maior ou igual a 0.\n");
        return 1;
    }

    int temp = n; // variável auxiliar para o while

    while (temp > 1) {
        fat *= temp;   // multiplica pelo número atual
        temp--;        // decrementa
    }

    printf("%i! = %i\n", n, fat);

    return 0;
}

