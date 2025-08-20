#include <stdio.h>
//Aula 17 de abril de 2025
//Professor Richard
//Aluno Erick Ferreira Aleixo 
//RA 231430
//UNASP Campus SP

int main() {
	
	float peso, altura, imc;
	
	printf ("----- IMC -----\n");
	printf ("Digite seu Peso (Kg): ");
	scanf ("%f", &peso);
	printf ("Digite sua altura (m): ");
	scanf ("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf ("%.2f", imc);
	
	
	if ( imc < 18.5) {
		printf ("Você está com indice MAGREZA de massa corporal!");
	} 
	
		else if ( imc >= 18.5 && imc < 24.9) { 
			printf ("Voce esta com indice NORMAL de massa croporal");
		} 
	
			else if ( imc >= 25 &&  imc < 29.9 ) {
				printf ("Voce esta com indice SOBREPESO de massa corporal");
			} 
	
				else if ( imc >= 30 &&  imc < 39.9) {
					printf ("Voce esta com indice OBESIDADE da massa corporal");
				} 
	
					else {
						printf ("Voce esta com OBESIDADE GRAVE");
					}
	
	return 0;

}


