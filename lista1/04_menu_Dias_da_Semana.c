#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Crie um menu usando o "SWITCH"
// O usuário deve digitar um valor de 1 a 7 para saber o dia da semana.

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	printf("Digite um valor de 1 a 7");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Ter�a");
			break;
		case 4:
			printf("Quarta\n");
		case 5:
			printf("Quinta\n");
			break;
		case 6:
			printf("Sexta\n");
		case 7:
			printf("S�bado\n");
		default:
			printf("op��o inv�lida. Tente novamente");
	}
	
		system("pause");
		return 0;
	}	





