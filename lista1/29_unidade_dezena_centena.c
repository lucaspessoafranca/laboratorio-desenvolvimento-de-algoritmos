#include <stdio.h>

//Crie um algoritmo que leia um n�mero inteiro de tr�s d�gitos e
// mostre esse valor separadamente da seguinte forma: 
//CENTENA=x 
//DEZENA=x 
//UNIDADE=x

int main () {
	
	int n, u ,d ,c ;
	
	
	printf("Digite um valor inteiro de tres digitos");
	scanf("%d", &n);
	
	
	c = n / 100; // 875 como ex, = 8
	d = n %100; // 75
	u = d % 10;
	d = d /10; // 7
	
	
	printf("\n %d = CENTENA  \n  %d = DEZENA \n %d = UNIDADE", c, d , u );
	
	
	
	
	
	
	
	return 0;
}
