#include <stdio.h>
#include <locale.h> 

int main () {
	setlocale(LC_ALL, "Portuguese");
	const int bimestresAnuais = 4;
  const int numeroDeAlunos = 4;

  float notasAlunos[numeroDeAlunos][bimestresAnuais] = {0};
  float mediaAlunos[numeroDeAlunos] = {0};

  float media = 0;

  printf("Insira as 4 notas do aluno 1: \n");

  for( int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
    for (int notas = 0; notas < bimestresAnuais; ++notas) {
      scanf("%f", &notasAlunos[aluno][notas]);
      media += notasAlunos[aluno][notas];    }

      mediaAlunos[aluno] = media / bimestresAnuais;
      media = 0;
      printf("Insira as 4 notas do aluno %i :\n ",aluno +2);
  }
  for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
    printf("A media do aluno %i é %.2f ", aluno +1, mediaAlunos[aluno]);
  }
}