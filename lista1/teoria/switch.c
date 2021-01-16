#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua m�dia

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int i ;
  //para casting (float)x
  
  printf("Digite um n�mero para saber o dia da  semana. \n");
  scanf("%d", &i);
  
  switch (i) {
  	case 1:
  		printf("Domingo");
  		break;
  	case 2:
  		printf("Segunda");
  		break;
  	case 3:
  		printf("Ter�a");
  		break;
  	case 4:
  		printf("Quarta");
  		break;
  	case 5:
  		printf("Quinta");
  		break;
  	case 6:
  		printf("Sexta");
  		break;
  	case 7:
  		printf("S�bado");
  		break;
  	default:
  		printf("Op��o inv�lida. Tente novamente..");
  		break;
  }

	
  return 0;
}
