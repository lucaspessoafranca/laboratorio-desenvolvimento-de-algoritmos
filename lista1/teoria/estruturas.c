#include <stdio.h>

int main () {
  
  struct horario 
  {
    int horas;
    int minutos;
    int segundos;
  };

  struct horario agora;

  agora.horas = 21;
  agora.minutos = 8;
  agora.segundos = 30;

  printf("%i:%i:%i",agora.horas, agora.minutos, agora.segundos);

  return 0;
}