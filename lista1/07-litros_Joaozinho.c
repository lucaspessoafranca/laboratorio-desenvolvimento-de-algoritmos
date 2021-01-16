#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 /* joaozinho quer calcular e mostrar a quantidade de litros de combust�vel gastos em uma viagem,
  ao utilizar um autom�vel que faz 12 KM/L.
 Para isso, ele gostaria que voc� o auxiliasse atrav�s de um simples programa. 
 Para efetuar o c�lculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade m�dia durante a mesma (em km/h).
 Assim, pode-se obter dist�ncia percorrida e, em seguida, calcular quantos litros seriam necess�rios. 
 Mostre o valor com 3 casas decimais ap�s o ponto.*/
 
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
    return 0;
}

