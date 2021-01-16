#include <stdio.h>
#include <locale.h> 

int main () {
  int n1 = 999;
  int n2 = 10;
	setlocale(LC_ALL, "Portuguese");
  //                        7 espaços
  printf("Variavel inteira %7d\n",n1);
  printf("Variavel inteira %i\n",n1);
  printf("Variavel inteira %x\n",n1);
  printf("Variavel inteira %o\n",n1);
  // pintf("variavel inteira %%d para printar o %") só usar 2
  printf("Variavel Double %f\n",n1);
  //                    
  printf("Variavel Double %e\n",n1);
  //            
  printf("Variavel Double %g\n",n1);
  printf("Variavel Double %a\n",n1);





	return 0;
}