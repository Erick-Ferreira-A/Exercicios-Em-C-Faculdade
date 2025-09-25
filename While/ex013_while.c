#include <stdio.h>

// Setembro de 2025
// Professor Richard
// Aluno: Erick Ferreira Aleixo
// RA 231430
// UNASP Campus SP

int main(void) {
	
    int numero, digito;

    // Solicita ao usu�rio um n�mero inteiro positivo
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo
    if (numero < 0) {
        printf("Por favor, digite um n�mero inteiro POSITIVO.\n");
        return 1; // Encerra o programa com erro
    }

    printf("N�mero invertido: ");

    // Se o n�mero for 0, imprime 0
    if (numero == 0) {
        printf("0");
    }

    // La�o para inverter os d�gitos
    while (numero > 0) {
        digito = numero % 10;         // Pega o �ltimo d�gito
        printf("%d", digito);         // Imprime o d�gito
        numero = numero / 10;         // Remove o �ltimo d�gito
    }

    printf("\n");
    return 0;
	
}
