#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio,
 calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.*/
int main () 
{
	setlocale(LC_ALL,"Portuguese");
	
	float sal_min, sal_func, resultado;
	
	
	printf("Informe o sal�rio minimo");
	scanf("%f", &sal_min);
	
	printf("Informe o sal�rio do funcion�rio");
	scanf("%f",&sal_func);
	
	resultado = sal_func / sal_min;
	
	printf("A quantidade de sal�rio m�nimo que o funcion�rio recebe � : %.1f",resultado);
	
	
	
	
	return 0;
}
