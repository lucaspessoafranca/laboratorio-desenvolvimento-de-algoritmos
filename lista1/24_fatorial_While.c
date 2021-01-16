#include <stdio.h>

int main () {

int  fat, n, x;
fat = 1;
printf("Numero:");
scanf("%d", &n);
x = n;
while(n >= 1) {
  fat*= n;
  n--; 
}
printf("o fatorial de %d  é %d",x , fat);

printf("\n");   