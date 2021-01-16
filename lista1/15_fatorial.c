# include <stdio.h>
	
	int main()
{
    int fatorial;
    int zero = 0;
    int numero = 1;

    printf("Digite seu numero :");
    scanf("%i", &fatorial);
    for(fatorial; zero!=fatorial; fatorial--)
    {

        numero *= fatorial;

    }

    printf("Seu resultado e: %i\n", numero);

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	

