#include <stdio.h> //bibloioteca necess�ria para a entrada e sa�da de dados
#include <stdlib.h>
#include <locale.h>

int main ()	{
	int n1 = 2;
	int n2 = 4;		
		
	setlocale(LC_ALL,"Portuguese");
		
	
	n1 > n2? printf("SIM!\n"): printf("N�O!\n");
		
		
	system("pause");
	return 0;
	}
