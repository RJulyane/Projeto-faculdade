#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares [100000];
    int x = 0;
    int y = 0;
    int i = 0;
    int j;
    while (x>=y){
		printf("digite dois valores validos (x<y)");
	    scanf("%i %i", &x, &y);
	}
    while (x!=y){
		if (x%2==0){
			pares[i] = x;
			i++;
		}
		x++;
	}
	printf("\nvalores pares :");
	for (j = 0; j < i; j++) {
    	printf("%d ", pares[j]);
	}
    return 0;
}
