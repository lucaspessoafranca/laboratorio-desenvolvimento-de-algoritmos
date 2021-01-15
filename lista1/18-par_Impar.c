#include <stdio.h>

/*Desenvolva um programa em linguagem C que classifique um número de entrada fornecido pelo usuário como par ou ímpar.*/

int main () {
	
	
	int num ;
	
	printf("Informe um numero");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("O numero %d e par", num);
	}
	
	else 
	{
		printf("o numero %d e impar", num);
	}
	
	
	
	
	
	
	
	return 0;
}
