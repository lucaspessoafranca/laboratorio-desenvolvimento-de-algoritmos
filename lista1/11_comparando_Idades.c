#include <stdio.h>

/* Elabore um programa em linguagem C que leia a idade de duas pessoas e imprima os dados da pessoa mais velha.*/

int main () {
	
	int idade1, idade2;
	
	printf("Informe a idade da Andriely : \n");
	scanf("%d" ,&idade1);
	printf("Informe a idade da Ariza : \n");
	scanf("%d", &idade2);
	
	
	if(idade1 > idade2)
	{
		printf("Andriely e mais velha com %d anos", idade1);
	}
	else if (idade2 > idade1)
	{
		printf("Ariza e a mais velha com %d anos", idade2);
	}
	else
	{
		printf("As duas tem a mesma idade. \n");
	}
	
	
	
	
	
	return 0;
}
