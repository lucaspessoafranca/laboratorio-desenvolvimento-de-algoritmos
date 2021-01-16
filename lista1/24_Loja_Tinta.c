/*
 Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 140,00 ou em galões de 3,6 litros, que custam R$ 52,00. Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações. Sempre arredonde os valores para cima, isto é, considere latas cheias:
• Comprar apenas latas de 18 litros;
• Comprar apenas galões de 3,6 litros;
• Misturar latas e galões.
*/
#include <stdio.h>
#include <math.h>
int main(void) {
  float area,litros;
  printf("Área (m²): ");
  scanf("%f", &area);
  litros = area/6;
  printf("Tinta necessária: %.2f litros.\n", litros);
  //calcula as latas de 18 litros
  int latas18;
  //opcao 1 apenas latas de 18 litros
  latas18=ceil(litros/18);//arredonda pra cima
  //Opções
  printf("\nOpção 1: ");
  printf("\nLatas de 18 litros");
  printf("\nQtde: %i", latas18);
  printf("\nPreço: R$ %.2f", latas18*140.0);
  printf("\nCobertura de %i metros.", 
  latas18*18*6);
  
  //opcao 2 apenas galoes de 3,6 litros
  int galoes36;
  galoes36=ceil(litros/3.6);//arredonda pra cima
  //Opções
  printf("\n\nOpção 2: ");
  printf("\nGalões de 3.6 litros");
  printf("\nQtde: %i", galoes36);
  printf("\nPreço: R$ %.2f", galoes36*52.0);
  printf("\nCobertura de %.1f metros.", galoes36*3.6*6);
  
  //opcao 3 apenas latas e galões
  latas18=floor(litros/18);//arredonda pra baixo
  litros=litros-latas18*18;
  galoes36=ceil(litros/3.6);//arredonda pra cima
  printf("\n\nOpção 3: ");
  printf("\nLatas de 18 litros");
  printf("\nQtde: %i", latas18);
  printf("\nGalões de 3.6 litros");
  printf("\nQtde: %i", galoes36);
  printf("\nPreço: R$ %.2f", latas18*140+galoes36*52.0);
  printf("\nCobertura de %.1f metros.", latas18*18*6+galoes36*3.6*6);
  return 0;
} 