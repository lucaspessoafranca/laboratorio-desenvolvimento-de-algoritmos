#include <stdio.h>

/* Segundo uma tabela médica, o peso ideal está relacionado com a altura e o sexo da pessoa.
 Elabore um programa em linguagem C que leia a altura e o sexo de uma pessoa,
  calcule e imprima seu peso ideal, utilizando as seguintes fórmulas: 
Para homens :  (72,7 * altura) – 58
Para mulheres :  (62,1 * altura) – 44,7*/
int main () {
	
	char s ;
	float a;
	
	printf("Informe seu sexo [M/F]");
	scanf("%c", &s);
	printf("\nInforme a sua altura :");
	scanf("%f", &a);
	
	if ( s == 'M')
	{
		printf("\nMasculino :O seu peso ideal e %.2f", (a*72.7)-58);
	}
	else if ( s == 'F')
	{
		printf("\n Feminino O seu peso ideal e %.2f", (a*62.1)-44.7);
	}
	else 
	{
		printf("Comando invalido, Tente Novamente.");
	}



	return 0;

}
