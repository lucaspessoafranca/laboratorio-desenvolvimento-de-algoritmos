#include <stdio.h>

/* Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que 
R$ 20,00; 
caso contrário, o lucro será de 30%. 
Escreva um programa em linguagem C que leia o valor do produto e imprima o valor de venda para o produto.*/
int main () {
	
	
	float vProduto, vVenda;
	
	printf("Informe o valor do produto : \n");
	scanf("%f", &vProduto);
	
	if (vProduto >= 20) {
		vVenda = vProduto + (vProduto * 30/100);
		printf("Valor do produto: %.2f , valor com o lucro de 30%%: %.2f \n", vProduto, vVenda);
	}
	else {
		vVenda = vProduto + (vProduto * 45/100);
		printf(" Valor do produto %.2f, valor com lucro de 45%% : %.2f \n", vProduto, vVenda);
	}
	
	
	
	
	return 0;
	
	
	
	
	
}
	
	
	
	
	
