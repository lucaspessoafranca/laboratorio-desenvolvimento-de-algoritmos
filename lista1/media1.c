#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua média

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float nota1, nota2, media = 0 ;

  printf("Bem-Vindo ! \n");
  printf("Digite a sua primeira nota : \n");
  scanf("%f", &nota1);
  printf("Digite a sua Segunda nota : \n");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("A sua média é : %.2f", media );



  return 0;
}
