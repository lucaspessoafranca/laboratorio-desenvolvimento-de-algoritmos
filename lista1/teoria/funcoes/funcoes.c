#include <stdio.h>
#include <locale.h> 

int main () {
	setlocale(LC_ALL, "Portuguese");
	float calcularArea(float x, float y);
  float area = calcularArea(10.0,20.0);
  printf("A área é : %f",area);

  return 0;
}

float calcularArea(float base, float altura){
  float area = base * altura;

  return area;
}