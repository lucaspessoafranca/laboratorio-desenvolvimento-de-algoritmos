#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que leia dois números representando horas e minutos, e calcule o número de minutos passados desde 00:00 H..

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int h , m, sm;
	
	printf("Digite as horas e os minutos com dois digitos cada: ");
	scanf("%d",&h);
	scanf("%d",&m);
	
	sm = (h * 60) + m;
	
	printf("\n Desde as 00:00 Hs , Obtivemos um total de %d minutos", sm);
	
	
	
	return 0;
}
