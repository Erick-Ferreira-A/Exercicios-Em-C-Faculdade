#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
    int senhaPadrao = 314159;
    int senha;

    printf("\n---------- VALIDACAO SENHA ----------\n");

    printf("\nOla, digite a senha para acessar: ");
    if (scanf("%d", &senha) != 1) return 1; // se leitura falhar, sai

    while (senhaPadrao != senha) {
        printf("Senha incorreta, digite novamente: ");
        if (scanf("%d", &senha) != 1) return 1;
    }

    printf("Acesso Liberado!\n");
    return 0;
}

