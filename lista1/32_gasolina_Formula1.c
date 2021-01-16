/*
4.41) Uma equipe de Fórmula 1 deseja calcular o número mínimo de litros que deverá colocar no tanque de seu carro de corrida para que ele possa percorrer um determinado número de voltas até o primeiro reabastecimento. Faça um programa que leia o comprimento da pista (em metros), o número total de voltas a serem percorridas em toda a corrida, o número de reabastecimentos desejados e o consumo de combustível do
carro (em Km/L). Calcular e escrever o número mínimo de litros necessários para
percorrer até o primeiro reabastecimento. OBS: Considere que o número de voltas entre
os reabastecimentos é o mesmo.
*/
#include <stdio.h>
int main(void) {
  float comprim_pista, consumo, min_litros;
  int n_voltas, n_reabast, dist_total;
  //entrada
  printf("Comprimento da pista (m): ");
  scanf("%f", &comprim_pista);
  printf("Número total de voltas: ");
  scanf("%i", &n_voltas);
  printf("Número de reabastecimentos: ");
  scanf("%i", &n_reabast);
  printf("Consumo do carro (Km/L): ");
  scanf("%f", &consumo);
  //processamento
  dist_total = n_voltas * comprim_pista;
  float trecho = dist_total/(n_reabast+1)/1000;// divide por mil para transformat de metro para km.
  min_litros = trecho / consumo;
  //Saida
  printf("Mínimo de litros na largada: %.2f litros", min_litros);
  return 0;
}