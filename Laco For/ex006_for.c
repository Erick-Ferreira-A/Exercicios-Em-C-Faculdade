#include <stdio.h>

int main() {
	
	int num1, result;
	int i = 0;
	
	
	printf("Digite um numero inteiro para o calculo da tabuada: ");
	scanf("%i", &num1);
	
	for(i = 0; i <= 10; i++) {
		
		result = i * num1;
		printf("%i X %i = %i\n", num1, i, result);
	}
	
	return 0;
	}
