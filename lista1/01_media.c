#include <stdio.h>
#include <locale.h> 

//crie um programa que receba duas notas e calcule sua m�dia

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float nota1, nota2, media = 0 ;

  printf("Bem-Vindo ! \n");
  printf("Digite a sua primeira nota : \n");
  scanf("%f", &nota1);
  printf("Digite a sua Segunda nota : \n");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("A sua m�dia � : %.2f", media );



  return 0;
}
