#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
	
    int inicio, fim;

    // Solicita os valores do intervalo
    printf("Digite o numero inicial: ");
    scanf("%d", &inicio);

    printf("Digite o numero final: ");
    scanf("%d", &fim);

    // Garante que o in�cio seja menor ou igual ao fim
    if (inicio > fim) {
        printf("O numero inicial deve ser menor ou igual ao n�mero final.\n");
        return 1;
    }

    // Come�a do pr�ximo n�mero par, se o in�cio for �mpar
    if (inicio % 2 != 0) {
        inicio++;
    }

    printf("Numeros pares no intervalo:\n");

    // Imprime os n�meros pares no intervalo
    while (inicio <= fim) {
        printf("%d\n", inicio);
        inicio += 2;
    }

    return 0;
	
}
