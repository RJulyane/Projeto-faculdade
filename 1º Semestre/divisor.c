#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	int divisor, x=1;
	printf("digite o divisor");
	scanf("%i", &divisor);
	while (x !=0){
		printf("digite o numero, ou digite 0 para sair");
		scanf("%i", &x);
		if (x!=0 && x%divisor==0){
			printf("Multiplo encontado: %i\n", x);
		}
	}
	printf("saindo do programa . . .");
    return 0;
}
