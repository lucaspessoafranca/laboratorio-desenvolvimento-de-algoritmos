#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua m�dia

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int num1  = 2033;
  int num2 = 440;
  
  num1 < num2 ? printf("Sim\n") : printf("N�o \n");

  return 0;
}
