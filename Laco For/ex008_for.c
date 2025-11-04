#include <stdio.h>

int main() {
    
    int inicio, fim, i;

    printf("Digite o numero inicial do intervalo: ");
    scanf("%i", &inicio);
    
    printf("Digite o numero final do intervalo: ");
    scanf("%i", &fim);
    
    printf("\nNumeros pares no intervalo de %i ate %i:\n", inicio, fim);
    

    for(i = inicio; i <= fim; i++) {

        if (i % 2 == 0) {

            printf("%i\n", i);
        }
    }
    
    return 0;
}
