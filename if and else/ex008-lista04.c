//Centro Universitário Adventista de São Paulo - UNASP
//Ciência da Computação 1° Semestre
//Professor Richard 
//Aluno Erick Ferreira Aleixo
//RA 231430
//ex009-lista04

#include <stdio.h>

int main () {
	
	char senha[20];
	
	printf("----------SENHA----------\n");
	printf("Digite a senha: ");
	scanf("%s", senha);
	
	if (strcmp(senha, "admin123") == 0) {
		printf("Acesso permitido\n");
	}	else {
		printf("Senha incorreta\n");
	}
	
	return 0;
}
