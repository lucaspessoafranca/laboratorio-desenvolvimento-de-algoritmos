#include <stdio.h>

//Três amigos decidiram rachar igualmente a conta de um bar. Faça um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que apenas um deles pague centavos. Ex: uma conta de R$ 101,53 resulta em R$ 33,00 para o primeiro,
// R$ 33,00 para o segundo e R$ 35,53 para o terceiro.

int main () {
	
	float valor, a1 , a2, a3 , r1 , r2;
	
	printf("Informe o valor da conta: \n");
	scanf("%f" , &valor);
	
	a1 = valor / 3;
	a2 = valor / 3; 
	a3 = valor / 3;
	
	r1 = a1 - floor(a1);
	
	a1 = a1 - r1;
	
	r2 = a2 - floor(a2);
	
	a2 = a2 - r2;
	
	a3 = a3 + (r1 + r2);
	
	printf("Conta do amigo 1 = %.2f\n", a1);
	printf("Conta do amigo 2 = %.2f\n", a2);
	printf("Conta do amigo 3 = %.2f\n", a3);
	
	
	
	
	return 0;
}
