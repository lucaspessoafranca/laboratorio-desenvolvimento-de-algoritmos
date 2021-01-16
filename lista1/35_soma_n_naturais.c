#include <stdio.h>
/*
Dados n e uma sequência de n números inteiros positivos, determinar a soma dos
números pares.*/
int main(void) {
  int n , soma=0;
  printf("informe o número:");
  scanf("%d",&n);
  for(int i = 1; i<n; i++){
    if(i % 2 == 0){
      printf("\n %i é par", i);
      soma += i;
    }
  }
  printf("\nSoma: %i", soma);
  return 0;
}