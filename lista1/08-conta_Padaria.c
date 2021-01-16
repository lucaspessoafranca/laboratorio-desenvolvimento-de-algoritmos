#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um algoritmo que permita entrar com a quantidade de pães e leite. 
Informe o valor da conta do cliente, sabendo que cada litro de leite custa R$2,50 e cada pão custa R$0,25.*/
int main ()
{
	int qpaes, qleite;
	float spao, sleite, conta;
	
	
	setlocale(LC_ALL,"Portuguese");
	printf("Informe a quantidade de pães e leite\n");
	scanf("%i %i",&qpaes, &qleite);
	
	spao = qpaes * 0.25;
	sleite = qleite *2.50;
	conta = spao + sleite;
	printf("Comprando %d pães e %d litros de leite\n",qpaes, qleite);
	printf("Sua conta deu : %.2f\n", conta);
	
	
	
	return 0;
}
