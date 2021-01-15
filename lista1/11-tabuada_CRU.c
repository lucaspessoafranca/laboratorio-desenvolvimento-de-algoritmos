#include <stdio.h>
#include <locale.h>
			
			/*tabuada */

int main ()
 {
	setlocale(LC_ALL,"Portuguese");	
	
	int n;
	int i;
	printf("Digite um número para saber a tabuada");
	scanf("%d", &n);
	for(i = 0; i <= 10; i++)
	{
	
	printf("%d x %d = %d\n", n, i, n*i );
		
	}


	/*	printf("%d x 0 = %d\n",n,n*1);
	printf("%d x 1 = %d\n", n,n*2);
	printf("%d x 2 = %d\n", n,n*2);
	printf("%d x 3 = %d\n", n,n*3);
	printf("%d x 4 = %d\n", n,n*4);
	printf("%d x 5 = %d\n", n,n*5);
	printf("%d x 6 = %d\n", n,n*6);
	printf("%d x 7 = %d\n", n,n*7);
	printf("%d x 8 = %d\n", n,n*8);
	printf("%d x 9 = %d\n", n,n*9);
	printf("%d x 10= %d\n", n,n*10);*/
	
	return 0;
}
	
