#include <stdio.h>
/*
 Faça um programa que apresenta na tela toda a tabela ASCII, ou seja, apresenta a
tela todos os caracteres cujos valores estão entre 0 e 255.
*/
int main(void) {
  for(int i = 0; i<256;i++) {
    printf("\n%i = %c",i,i);
  }

  return 0;
}