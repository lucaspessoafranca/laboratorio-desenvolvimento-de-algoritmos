#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fa�a um algoritmo que leia a dist�ncia entre duas cidades em milhas
// e imprima a dist�ncia equivalente em quil�metros (1,61 km = 1 mi).


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float mi, km;
	
	printf("Informe a dist�ncia entre as duas cidades em milhas : ");
	scanf("%f", &mi);
	
	km= mi * 1.61;
	
	printf("A dist�ncia equivalente  em quil�metros � %f :",km);
	
	
	return 0;
}
