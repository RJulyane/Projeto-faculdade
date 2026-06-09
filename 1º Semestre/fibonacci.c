#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=-1;
    int x=0;
    int y=1;
    int z=0;
    int i=3;
    
    printf("digite um inteiro, positivo\n");
	scanf("%i", &n);
		
    while (n<=0){
		printf("valor invalido\n");
		scanf("%i", &n);
	}
	printf("%i ", x);
	printf("%i ", y);
	while (i<=n){
		z=x+y;
		i=i+1;
		printf("%i ",z);
		x=y;
		y=z;
	}
	i--;
	printf("\nQuantidade de termos exibidos: %i", i);
	
    
    return 0;
}
