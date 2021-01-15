#include <stdio.h>
//Escreva um algoritmo que leia dois números representando horas e minutos,
// e calcule o número de minutos passados desde 00:00 H

int main () {
	
	int h , m , sm;
	
	
	printf("Digite as horas e os minutos :");
	scanf("%d", &h);
	scanf("%d", &m);
	
	sm =  (h * 60) + m;
	
	printf("Desde as 00:00 hrs obtivemos um total de %d minutos ", sm);
	
	
	
	
	return 0;
}
