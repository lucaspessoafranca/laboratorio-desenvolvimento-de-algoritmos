#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um algoritmo que imprima a multiplicação dos números 2,541 e 9,673.
 Os números e o resultado devem ser apresentados em 10 espaços com apenas 2 casas decimais cada um*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float a = 2.541;
	float b = 9673;
	float soma;
	
	printf("O valor %8.2f multiplicado com o valor %8.2f é %8.2f\n",a , b , a*b);
	
	system ("pause");
	return 0;
	
}

