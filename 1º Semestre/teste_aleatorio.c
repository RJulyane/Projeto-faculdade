#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x;
	int n;
	srand(time(0));
    printf("valor maximo\n");
    scanf(" %i", &x);
    n = rand()%x;
    printf("%i", n);
    return 0;
}
