#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
    int num;
    int qtdDigitos = 0;

    printf("\n---------- QTD DE DIGITOS ----------\n");
    printf("\nDigite um numero INTEIRO positivo e descubra a quantidade de digitos deste numero: ");

    if (scanf("%i", &num) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (num <= 0) {
        printf("Erro: O numero deve ser maior que 0.\n");
        return 1;
    }

    while (num > 0) {
        num = num / 10;   // elimina o último dígito
        qtdDigitos++;     // conta 1 dígito
    }

    printf("\nO numero tem %i digito(s).\n", qtdDigitos);

    return 0;
}

