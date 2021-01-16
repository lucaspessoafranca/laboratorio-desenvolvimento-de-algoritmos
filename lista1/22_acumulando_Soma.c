#include <stdio.h>
#include <locale.h> 

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x , soma = 0;

  while(1) {
    printf("Digite um número: ");
    scanf("%d", &x);
    soma+=x;
    if(x==0) {
      break;
    }
    printf("Soma: %d \n", soma);
  }
  return 0;
}


