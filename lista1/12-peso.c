#include <stdio.h>
#include <locale.h>

//Elabore um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	float kg, g;
	
	printf("Informe quantos KG voc� tem :\n");
	scanf("%f",&kg);
	
	g = kg * 1000;
	
	printf("Seu peso em gramas � : %.3f",g);
	
	
	return 0;
}
