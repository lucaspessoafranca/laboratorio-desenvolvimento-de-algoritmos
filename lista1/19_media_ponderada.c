
#include <stdio.h>

/*O sistema de avalia��o de determinada disciplina � composto por tr�s provas.
A primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5.
Considerando que a m�dia para aprova��o � 7.0, 
fa�a um programa em linguagem C para calcular a m�dia final de um aluno desta disciplina e dizer 
se o aluno foi aprovado ou n�o.*/

int main () {
	
	float p1, p2 , p3, media;
	
	printf("Informe as tres notas do aluno :\n");
	scanf("%f %f %f", &p1, &p2, &p3);
	
	
	media = ((p1*2) + (p2 * 3) + (p3 * 5)) / 10;
	
	if ( media >= 7 ) {
		printf("Aluno foi aprovado com media %f", media);
	}
	else if(media < 7)
	{ 
	printf("O aluno esta reprovado com media %f" , media);	
	}

	else
	{
		printf("Ocorreu um erro. Tente novamente !");
	}
	
	
	
	
	
	
	
	return 0;
}
