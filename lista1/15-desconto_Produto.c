#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
//sabendo-se que este sofreu um desconto de 10%.

int main () {
	setlocale(LC_ALL,"Portuguese");
	float produto , desconto;
	
	printf("Informe o preço do produto:");
	scanf("%f", &produto);
	
	desconto = produto - (produto * 10/100);
	
	printf("Novo valor com 10 porcento de desconto é : %.2f", desconto);
	
	
	
	
	
	return 0;
}
