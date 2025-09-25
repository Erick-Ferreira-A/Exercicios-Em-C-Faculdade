#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
	
    int numero, digito;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Por favor, digite um número inteiro POSITIVO.\n");
        return 1; // Encerra o programa com erro
    }

    printf("Número invertido: ");

    // Se o número for 0, imprime 0
    if (numero == 0) {
        printf("0");
    }

    // Laço para inverter os dígitos
    while (numero > 0) {
        digito = numero % 10;         // Pega o último dígito
        printf("%d", digito);         // Imprime o dígito
        numero = numero / 10;         // Remove o último dígito
    }

    printf("\n");
    return 0;
	
}
