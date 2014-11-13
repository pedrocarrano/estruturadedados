#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n,i,j;
	printf("Digite o tamanho do vetor:\n");
	scanf("%i", &n);
	
	int *array;
	array = (int*)malloc(n*sizeof(int));
	
	
	  for (i=0; i<n; i++){
	printf("Digite um valor\n");
	scanf("%i", &array[i]);
	}
	
	i=0;
	for (i=0; i<n; i++){
		printf("Vetor[%i]=%i\n", i, array[i]);
	}
	return(0);
}
