#include <stdio.h>

int main() {
	
	int n, i, result = 1;
	
	printf("Digite um numero inteiro para o calculo fatorial: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++) {
		
		result *= i;
	}
	
	printf("O !%i e %i", n, result);
	
	return 0;
}
