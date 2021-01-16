#include <stdio.h>
#include <locale.h> 



int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  for(int i = 1 ; i <= 10; ++i) {
  	printf("Volta %d\n", i);
  	for (int j = 1; j <= 10; ++j) {
  		printf("Ponto %d\n", j);
	  }
  }  
  return 0;
}
