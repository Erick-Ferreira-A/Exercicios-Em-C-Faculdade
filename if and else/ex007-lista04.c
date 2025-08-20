//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex007-lista04

#include <stdio.h>

int main () {
	
	float n1, n2, result;
	char operador;
	
	printf("----------OPERADOR----------\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite um OPERADOR para o calculo: (+, -, *, /) ");
	scanf("%s", &operador);
	
	
	if (operador == '+') {
		result = n1 + n2;
		printf("A soma dos numeros e %.2f", result);
	}	else if (operador == '-') {
		result = n1 - n2;
		printf("A subtracao dos nueros e %.2f", result);
	}	else if (operador == '*') {
		result = n1 * n2;
		printf("A multiplicacao dos numeros e %.2f", result);
	}	else if (operador == '/'){
		result = n1 / n2;
		printf("A divisao entre os numeros e %.2f", result);
	}	else {
		printf("Operador invalido");
	}
	
	return 0;
}
