#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
e.h>
/*Fa�a um algoritmo que calcule a m�dia final de um aluno que tem as notas 6,8 na primeira prova, 5,5 na segunda prova e 8,3 na terceira prova.
 Considerar que a m�dia � ponderada e que o peso das notas �: 2,3 e 5, respectivamente.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1 = 6.8, n2 = 5.5, n3 = 8.3, resultado;
	resultado = ((n1*2)+(n2*3)+(n3*5))/10;
	
	printf("Media final do aluno : %.2f", resultado);
	
	return 0;
}
	
	
	
