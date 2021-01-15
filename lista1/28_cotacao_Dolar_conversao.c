#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que converta um valor em dólar para real.
 O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade de dólares a ser convertida.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float cot, dol, real;
	
	
	printf("Informe a cotação  atual do dolar :");
	scanf("%f", &cot);
	printf("Informe a quantidade de dolares a serem convertidos :\n" );
	scanf("%f", &dol);
	
	real = dol * cot;
	
	printf("A quantidade convertida para real brasileiro é %f", real);
	
	return 0;
}
