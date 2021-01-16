/*
Escreva um programa que leia um número inteiro e calcule e mostre a sua
decomposição em unidade, dezena, centena e milhar. Considere que o número máximo
recebido via teclado será de 9999. Exemplo:
 A entrada 8531 terá a saída:
  unidade = 1 
  dezena  = 3
  centena = 5
  milhar = 8
  
*/

#include <stdio.h>

int main () {

    int n , unid, dez, cent , mil;

    printf("Informe um número\n");
    scanf("%d", &n);
    unid = n % 10;
    dez = (n % 100) / 10;
    cent = (n % 1000) / 100;
    mil = (n % 10000) / 1000;

    printf("Unidade: %d\n", unid);
    printf("Dezena: %d\n", dez);
    printf("Centena: %d\n", cent);
    printf("Milhar: %d\n", mil);

    return 0;
}
