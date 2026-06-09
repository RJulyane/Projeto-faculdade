#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    printf("qual o tamanho do vetor?");
    scanf("%i", &i);
    
    char vetorzin[i];
    for(j=0;j<i;j++){
		printf("\ndigite o valor:");
    	scanf(" %c", &vetorzin[j]);
	}
	for(j=i-1;j>=0;j--){
		printf(" %c", vetorzin[j]);
	}    
    printf("\nvogais presentes: ");
	for(j=0;j<i;j++){
		if (vetorzin[j]=='a' || vetorzin[j]=='e' || vetorzin[j]=='i' || vetorzin[j]=='o' || vetorzin[j]=='u'){
			printf(" %c", vetorzin[j]);
		}
		else if (vetorzin[j]=='A' || vetorzin[j]=='E' || vetorzin[j]=='I' || vetorzin[j]=='O' || vetorzin[j]=='U'){
			printf(" %c", vetorzin[j]);
		}
	} 
    return 0;
}
