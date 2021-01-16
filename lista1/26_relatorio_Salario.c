#include <stdio.h>
#include <locale.h> 
/*Faça um Programa que pergunte quanto você ganha por hora e o número de
horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 14% para o Imposto de Renda, 11% para o INSS e
1% para o sindicato. Calcule os descontos e o salário líquido, e exibe um relatório
conforme a tabela abaixo:
+ Salário Bruto: R$ <valor>
- IR (14%): R$ <valor>
- INSS (11%): R$ <valor>
- Sindicato (1%): R$ <valor>
= Salário Líquido: R$ <valor>
Obs.: Salário Bruto - Descontos = Salário Líquido.*/
int main(void) { 
  setlocale(LC_ALL, "Portuguese");

  float valor_hora, qtd_Horas, bruto, inss, sind, liquido, ir;
  

  //ENTRADA DE DADOS
  
  printf("Quanto Você ganha por hora?\n");
  scanf("%f", &valor_hora);
  printf("Quantas horas trabalhadas?");
  scanf("%f", &qtd_Horas);
  

  //PROCESSAMENTO
  bruto = qtd_Horas  * valor_hora;
  ir = bruto * 14/100;
  inss = bruto*11/100;
  sind = bruto*1/100;
  liquido = bruto - ir - inss - sind;
  // SAÍDA
  printf("+ Salário BRUTO: R$ %.2f\n", bruto);
  printf("- IR (14%) : R$ %.2f\n", ir);
  printf("- INSS (11%): R$ %.2f\n",inss);
  printf("- SINDICATO: R$ %.2f\n", sind);
  printf("= Salário Líquido : R$ %.2f\n",liquido);


  return 0;
}