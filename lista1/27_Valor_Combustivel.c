/* Faça um Programa que receba um valor de combustível, calcule e mostre o valor
desse mesmo combustível saído da refinaria e todos os valores incluídos no preço final,
com base nos seguintes percentuais de despesas e impostos (Referência:
http://www.petrobras.com.br/ pt/produtos/composicao-de-precos/).
• 17% - Distribuição e Revenda
• 12% - Custo Etanol Anidro
• 28% - ICMS
• 7% - CIDE, PIS/PASEP e COFINS
A saída do programa deve obedecer ao seguinte formato:
+ Valor na bomba: R$ <valor>
- Distribuição e Revenda (17%): R$ <valor>
- Custo Etanol Anidro (12%): R$ <valor>
- ICMS (28%): R$ <valor>
- CIDE, PIS/PASEP e COFINS (7%): R$ <valor>
= Valor da refinaria: R$ <valor>*/
#include <stdio.h>
#include <locale.h> 

int main () {
    setlocale(LC_ALL, "Portuguese");
    
    float bomba, dist, etanol, icms, cide, refinaria;

    //entrada
    printf("Valor na bomba: R$");
    scanf("%f", &bomba);

    //processamento

    dist= bomba * 17.0 /100; // ou 0.17
    etanol = bomba * 12.0 / 100;
    icsm = bomba * 28.0 / 100;
    cide = bomba * 7.0 / 100;
    refinar = bomba - dist - etanol - icms - cide;

    //saída (relatório)

    printf("+ Valor na bomba: R$ %2.f", bomba);
    printf("- Distribuição  e Revenda (17%%): R$ %.2f", dist);
    printf("- Custo Etanol Anidro (12%%): R$ %.2f", etanol);
    printf("- ICMS(28%%): R$ %.2f", icms);
    printf("- CIDE, PIS/PASEP e COFINS(7%%): R$ %2.f",cide);


    return 0;
}