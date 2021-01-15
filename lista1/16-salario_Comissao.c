#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Um funcionário recebe um salário fixo mais 5% de comissão sobre as vendas. 
////Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas,
//calcule e mostre a comissão e o salário final do funcionário.

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	float  s , vc , cc=0.05;
	
	printf("Informe qual é o salário do funcionário , Aperte enter , e informe o valor das vendas :");
	scanf("%f%f", &s, &vc);
	
	s = s + (vc*cc);
	
	printf("O funcionário tera a receber %.2f ", s);
	
	
	
	
	
	
	
	return 0;
}
