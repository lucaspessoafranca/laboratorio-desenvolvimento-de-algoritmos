#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Um quilo de comida no restaurante COMA AKILO custa R$ 45,00.
 Faça um algoritmo que apresente na tela o valor que deve ser pago por um cliente que comeu 750 gramas no almoço.? 
 */ 
 
 int main () {
 	
 	setlocale(LC_ALL,"Portuguese");
 	
 	float valor =  45.00, comeu = 0.750;
 	
 	printf("O valor a ser pago pelo cliente  é de %5.2f\n", comeu*valor);
 	
	 
	 
	system ("pause");
	return 0;
 }

 

 
