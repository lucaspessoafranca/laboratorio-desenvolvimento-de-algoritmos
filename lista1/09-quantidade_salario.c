#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário,
 calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.*/
int main () 
{
	setlocale(LC_ALL,"Portuguese");
	
	float sal_min, sal_func, resultado;
	
	
	printf("Informe o salário minimo");
	scanf("%f", &sal_min);
	
	printf("Informe o salário do funcionário");
	scanf("%f",&sal_func);
	
	resultado = sal_func / sal_min;
	
	printf("A quantidade de salário mínimo que o funcionário recebe é : %.1f",resultado);
	
	
	
	
	return 0;
}
