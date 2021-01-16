#include <stdio.h>

//Elabore um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui.
// Essa pessoa vai passar por vários países e precisa converter seu dinheiro em :
//dólares, marco alemão e libra esterlina. Sabe-se que a cotação do dólar é de R$ 5,50 
//R$ 3,17, do euro é de R$ 3,47 e da libra esterlina é de R$ 4,74.
// O algoritmo deve fazer as conversões e mostrá-las.



int main () {
	
	float dolar = 5.50, euro = 3.47 , libra = 4.74, real;
	
	printf("Informe a quantia em reais ");
	scanf("%f", &real);
	
	dolar = dolar * real;
	
	euro *= real;
	
	libra *=  real;
	
	printf("\n %.2f = Valor em reais  !", real);
	printf("\n %.2f = Valor em dolares  !", dolar);
	printf("\n %.2f = Valor em libras  !", libra);
	printf("\n %.2f = Valor em Euros  !", euro);
	
	
	
	
	return 0;
}
