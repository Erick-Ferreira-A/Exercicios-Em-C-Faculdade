#include <stdio.h>

	// Agosto de 2025
	// Professor Richard
	// Aluno: Erick Ferreira Aleixo 
	// RA 231430
	// UNASP Campus SP

int main() {
	
	int nOpcao;
	
	printf("---------- MENU DE OPCOES --------\n");
	
	//  printf("- 1 - Cadastrar\n"
	//	"- 2 - Excluir\n"
	//	"- 3 - Atualizar\n"             (FORMAS DIFERENTES DE SE ESCREVER COM QUEBRAS DE LINHAS.)
	//	"- 4 - Sair\n"); 
		
	puts("- 1 - Cadastrar");
    puts("- 2 - Excluir");
    puts("- 3 - Atualizar");
    puts("- 4 - Sair");
    
    printf("Digite sua opcao para continuar:\n");
    scanf("%i", &nOpcao);
    
    switch (nOpcao) {
    	
    	case 1:
			printf("Voce escolheu fazer um cadastro.");
	    	break;
	    case 2:
	    	printf("Voce escolheu excluir um registro.");
	    	break;
	    case 3:
	    	printf("Voce escolheu atualizar um registro.");
	    	break;
	    case 4:
	    	printf("Voce escolheu sair do programa.");
	    	break;
	    default:
	    	printf("Numero invalido. Por favor, digite um numero que esta disponivel no menu de opcoes.");
	    	break;
	}
	
	return 0;
}
