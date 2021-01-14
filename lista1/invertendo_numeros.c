#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua média

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  int numero , cifra;
  
  printf("Digite um número inteiro :\n");
  scanf("%d", &numero);
  
  if (numero >= 0) {
  	do {
  		cifra = numero % 10;
  		printf("%d", cifra);
  		numero /= 10;
	  } while (numero != 0);
	  
	  printf("\n");
	
  }
  
  else if (numero < 1) {
  	numero = numero * -1 ;
  	do {
  		cifra = numero % 10;
  		printf("%d", cifra);
  		numero /= 10;
  		
	  } while (numero != 0);
  }
  	
  return 0;
}
