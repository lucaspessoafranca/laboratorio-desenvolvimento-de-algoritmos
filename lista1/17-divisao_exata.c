#include <stdio.h>

/*
Elabore um programa em linguagem C que leia dois n�meros e responda se a divis�o do primeiro pelo segundo � exata
 (o resto da divis�o deve ser igual a 0). 
 e for, o programa deve imprimir a mensagem �A divis�o de (1o numero) por (2o n�mero) � exata�.*/

int main () {
	
	int n1 , n2 ;
	
	
	printf("Informe dois numeros :");
	
	scanf("%d %d", &n1 , &n2);
	
	
	if ( n1 % n2 == 0) {
		printf("A divisao do numero %d com o numero %d e exata", n1, n2);
		
	}
	
	else {
		printf("A divisao do numero %d com o numero %d nao e exata ", n1, n2);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
