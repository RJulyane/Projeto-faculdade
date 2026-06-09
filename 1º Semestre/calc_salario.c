#include <stdio.h>
#include <stdlib.h>
float salarios[11];
float calc=0;
int main()
{
	int i;
    for (i=0;i<12;i++){
		printf("digite o salario\n");
		printf("R$ ");
		scanf(" %f", &salarios[i]);
		
	}
	printf("salarios:\n");
	for (i=0;i<12;i++){
		
		printf("mes %i: R$ %f\n", i+1, salarios[i]);
		calc=calc+salarios[i];
	}
	printf("salario anual: R$ %.2f", calc);
	
    return 0;
}
