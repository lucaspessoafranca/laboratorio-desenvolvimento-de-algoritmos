#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o,
//sabendo-se que este sofreu um desconto de 10%.

int main () {
	setlocale(LC_ALL,"Portuguese");
	float produto , desconto;
	
	printf("Informe o pre�o do produto:");
	scanf("%f", &produto);
	
	desconto = produto - (produto * 10/100);
	
	printf("Novo valor com 10 porcento de desconto � : %.2f", desconto);
	
	
	
	
	
	return 0;
}
