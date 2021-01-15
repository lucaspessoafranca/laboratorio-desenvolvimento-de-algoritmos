#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 /* joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem,
  ao utilizar um automóvel que faz 12 KM/L.
 Para isso, ele gostaria que você o auxiliasse através de um simples programa. 
 Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h).
 Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. 
 Mostre o valor com 3 casas decimais após o ponto.*/
 
int main() {
    setlocale(LC_ALL,"Portuguese");
    
    float tempo, vm, dist,comb;
    
    printf("Olá , Joãozinho!\n");
    printf("Digite o tempo gasto: [em horas]\n");
    scanf("%f", &tempo);
    printf("Digite a velocidade média [KM/h]\n");
    scanf("%f", &vm);
    dist = vm*tempo; // =distância percorrida
    comb = 12*dist;
    printf("\n");
    
    printf("Joãzinho, Será necessário %.3f Litros\n", comb);
}

