#include <stdio.h>
#include <locale.h> 
// global aqui 

int main () {
	setlocale(LC_ALL, "Portuguese");
	void teste(void);
    teste();
    teste();
    teste();

    return 0;

}

void teste(void) {
static int variavelLocalEstatica = 2;
variavelLocalEstatica *=2

printf("Local estática: %i\n",variavelLocalEstatica);
}