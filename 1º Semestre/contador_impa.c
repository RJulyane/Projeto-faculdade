#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=1;
    int i=0;
    int j =0;
    int x;
    printf("quantos valores deseja informar");
    scanf("%i", &x);
    while (i!=x){
		printf("escreva o numero: ");
	    scanf("%i", &num1);
	    if (num1%2 !=0){
			j++;
		}
		i++;
	}
	printf("%i", j);
    return 0;
}
