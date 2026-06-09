#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    char vogais[5] = {'A','E','I','O','U'};
    int i;
    srand(time(0));
    i = rand()%5;
    printf("%c", vogais[i]);
    
    return 0;
}
