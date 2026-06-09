#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[4][4];
    int i;int j;
    for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf(" coordenada [%i][%i]: ", i, j);
			scanf(" %c", &m[i][j]);			
			
		}
		printf("\n");
	}
	printf("\n");
	
    for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (i==j){
				printf(" %c ", m[i][j]);
			}
			else{
				printf("  ");
				continue;
			}
			
		}
		printf("\n");
	}
    return 0;
}
