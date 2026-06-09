#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int valor;
    int vet[10];
    int i = 0;
    srand(time(NULL));
	for(i=0; i<10; i++){
		valor = 10+rand()%(10-99);
		if(valor%2==0){
			vet[i] = valor;
		} else {
			i--;
		}
		
	}
	
	for (i=0;i<10;i++){
		printf("%i\n", vet[i]);
	}
    return 0;
}
