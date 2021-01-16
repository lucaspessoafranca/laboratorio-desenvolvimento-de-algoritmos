#include <stdio.h>
/* O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a
quantidade de cada item que você consumiu e calcule o valor da conta final.
• X-salada..............................R$ 5.50
• X-Bacon...............................R$ 7.25
• X-Tudo................................R$ 10.30
• X-Egg.................................R$ 7.00
• Cerveja...............................R$ 4.50
• Refrigerante..........................R$ 6.00*/
int main () {
  int salada,bacon,egg,tudo,cerv,refri;
  printf("Informe as quantidades \n");
  printf("X-Salada: ");
  scanf("%d",&salada);
  printf("X-Bacon: ");
  scanf("%d",&bacon);
  printf("X-Tudo: ");
  scanf("%d", &tudo);
  printf("X-Egg:");
  scanf("%d", &egg);
  printf("Cervejas ");
  scanf("%d", &cerv);
  printf("Refrigerantes: ");
  scanf("%d", &refri);
  float valor_total;
  valor_total = salada * 5.5 + bacon * 7.25 + egg *7 + tudo* 10.30 + cerv * 4.5 + refri * 6;

  printf("Valor total da conta: R$ %.2f", valor_total);

  return 0;





}