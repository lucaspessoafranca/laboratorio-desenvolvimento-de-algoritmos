#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que converta um valor em d�lar para real.
 O algoritmo dever� solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares a ser convertida.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float cot, dol, real;
	
	
	printf("Informe a cota��o  atual do dolar :");
	scanf("%f", &cot);
	printf("Informe a quantidade de dolares a serem convertidos :\n" );
	scanf("%f", &dol);
	
	real = dol * cot;
	
	printf("A quantidade convertida para real brasileiro � %f", real);
	
	return 0;
}
