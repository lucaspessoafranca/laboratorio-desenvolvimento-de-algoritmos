#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Um funcion�rio recebe um sal�rio fixo mais 5% de comiss�o sobre as vendas. 
////Fa�a um algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas,
//calcule e mostre a comiss�o e o sal�rio final do funcion�rio.

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	float  s , vc , cc=0.05;
	
	printf("Informe qual � o sal�rio do funcion�rio , Aperte enter , e informe o valor das vendas :");
	scanf("%f%f", &s, &vc);
	
	s = s + (vc*cc);
	
	printf("O funcion�rio tera a receber %.2f ", s);
	
	
	
	
	
	
	
	return 0;
}
