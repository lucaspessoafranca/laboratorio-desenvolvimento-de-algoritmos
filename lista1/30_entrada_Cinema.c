#include <stdio.h>
int main() {
 int dia, idade, estudante, casal;
 printf("Informe o dia da semana (1:Domingo... 7:Sábado): ");
 scanf("%i", &dia);
 printf("Informe a idade: ");
 scanf("%i", &idade);
 printf("É estudante? (1:Sim ou 2:Não): ");
61
 scanf("%i", &estudante);
 printf("É casal? (1:Sim ou 2:Não): ");
 scanf("%i", &casal);
 if(dia==2 || idade<=12 || idade>=65 || estudante==1 || (dia==4 && casal==1)){
 printf("paga meia");
 } else {
 printf("paga inteira");
 }
 return 0;
}