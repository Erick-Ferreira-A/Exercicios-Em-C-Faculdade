#include <stdio.h> 

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
    int a, b, prod = 0;
    int contador; // para imprimir corretamente

    printf("\n---------- MULTIPLICACAO POR SOMA ----------\n");

    printf("\nOla, digite o primeiro INTEIRO para a multiplicacao por soma: ");
    if (scanf("%i", &a) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (a <= 0) {
        printf("Erro: O numero deve ser maior que 0.\n");
        return 1;
    }

    printf("\nOla, digite o segundo INTEIRO para a multiplicacao por soma: ");
    if (scanf("%i", &b) != 1) {
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
    if (b <= 0) {
        printf("Erro: O numero deve ser maior que 0.\n");
        return 1;
    }

    printf("\n---------- CALCULANDO ----------\n");

    contador = b; // cópia de b, para não perder o valor original

    while (contador > 0) {
        prod += a;

        printf("%i", a);
        if (contador > 1) {
            printf(" + ");
        }

        contador--;
    }

    printf(" = %i\n", prod);

    return 0;
}

