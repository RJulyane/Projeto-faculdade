#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	char caracter;
	int i=0;
	int j=0;
	
	while (i!=10 && j!=3){
		printf("digite o caracter\n");
		scanf(" %c", &caracter);
		if (caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
			printf ("%c\n", caracter+32);
			if (j>0){
				j=0;
			}
		}
		else if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u'){
			printf ("%c\n", caracter-32);
			if (j>0){
				j=0;
			}
		}
		else if (caracter=='x' || caracter=='X'){
			j++;
			i--;
		}
		else{
			printf("digite o caracter valido\n");
			i--;
		}
		i++;
	}
    return 0;
}
