#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int a = 5;
	int b = 5;
	int soma;
	
	soma = a + b;
	
	printf("A soma de %d + %d é igual a %d\n",a , b ,  soma);

	
	system ("pause");
	return 0;
	
}
