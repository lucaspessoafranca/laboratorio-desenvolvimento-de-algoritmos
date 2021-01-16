#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua média

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  int num1  = 2033;
  int num2 = 440;
  
  num1 < num2 ? printf("Sim\n") : printf("Não \n");

  return 0;
}
