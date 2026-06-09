#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	int x, y, i=0, j=0;
	printf("digite a altura e largura\n");
	scanf("%i %i", &x, &y);
	while (i!=x){
		while(j!=y)
		{
			printf("#");
			j++;
		}
		printf("\n");
		j=0;
		i++;
	}
    return 0;
}
