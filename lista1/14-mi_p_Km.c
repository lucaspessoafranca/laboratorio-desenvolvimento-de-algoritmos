#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que leia a distância entre duas cidades em milhas
// e imprima a distância equivalente em quilômetros (1,61 km = 1 mi).


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float mi, km;
	
	printf("Informe a distância entre as duas cidades em milhas : ");
	scanf("%f", &mi);
	
	km= mi * 1.61;
	
	printf("A distância equivalente  em quilômetros é %f :",km);
	
	
	return 0;
}
