#include <stdio.h> //bibloioteca necessária para a entrada e saída de dados
#include <stdlib.h>
#include <locale.h>

int main ()	{
	int n1 = 2;
	int n2 = 4;		
		
	setlocale(LC_ALL,"Portuguese");
		
	
	n1 > n2? printf("SIM!\n"): printf("NÂO!\n");
		
		
	system("pause");
	return 0;
	}
