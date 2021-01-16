#include <stdio.h>
/*Crie um programa que calcule o fatorial de um número n*/
int main () {

int  fat, n, x;
fat = 1;
printf("Informe um numero para saber o seu fatorial :");
scanf("%d", &n);
x = n;
while(n >= 1) {
  fat*= n;
  n--; 
}
printf("o fatorial de %d  é %d",x , fat);

printf("\n");   