#include <stdio.h>


/*Escreva um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, 
  meses e dias. 
 (Conforme um fato comemorativo que siga o calend�rio,
  como por exemplo a dura��o de um relacionamento).*/
  
  int main () {
  	
	int dias , meses=30, anos = 365, qtanos, sdias, qtmeses,qtdias;
	
	printf("Digite a quantidade total de didas");
	scanf("%d", &dias);
	
	qtanos= dias/anos ; // obt�m a quantidade de anos
	sdias = dias %anos ;// sobra de dias
	qtmeses = sdias / meses; //obtemos a qtd de meses
	qtdias = sdias % meses ; // quantidade de dias
	
	printf("\n EM %d dias , temos %d anos , %d meses e %d dias",dias,qtanos, qtmeses, qtdias );
  	
  	
  	
  	
  	
  	
  	
  	
  	return 0;
  }
