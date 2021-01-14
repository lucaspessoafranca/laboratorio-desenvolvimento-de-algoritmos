#include <stdio.h>
#include <locale.h> 

int main () {
	setlocale(LC_ALL, "Portuguese");
	
  void imprimir(void);
  imprimir();

  return 0;
}


void imprimir(void) {
  printf("TESTE");
}

