#include <stdio.h>
#include <math.h>
/*
Escreva um programa para calcular e imprimir o número de lâmpadas necessárias
para iluminar um determinado cômodo de uma residência. Dados de entrada: a potência
da lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros) do
cômodo. Considere que a potência necessária é de 18 watts por metro quadrado.
*/
int main(void) {
  
  int n_lamp, potencia_lamp;
  float larg, comp, area, potencia_total;
  printf("Potência da lampada:");
  scanf("%i", &potencia_lamp);
  printf("Largura (m):");
  scanf("%f", &larg);
  printf("Comprimento (m):");
  scanf("%f", &comp);
  area = comp * larg;
  potencia_total = area * 18;
  n_lamp = ceil(potencia_total / potencia_lamp);
  printf("\nÁrea : %.2f m² ",potencia_total);
  printf("\nPotência necessária: %.2f",potencia_total);
  printf("\n Número de lâmpadas: %i",n_lamp);



  return 0;
}