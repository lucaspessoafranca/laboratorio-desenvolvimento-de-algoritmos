#include <stdio.h>
#include <locale.h> 

/*
Faça um programa utilizando o comando "FOR" que 
apresenta a sequência de números de 5 (inclusive) até 20. (inclusive).
Refaça o código utilizando o comando "WHILE". */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x , i ;
    for(x = 5; x <=20; x ++) {
        printf("%d \n", x);
    }
    i = 5;
    while(i <= 20) {
        printf("%d\n",i);
        i++;
    }

  return 0;
}


