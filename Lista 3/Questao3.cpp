#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n,i;
		
	int *array;
	array = (int*)malloc(5*sizeof(int));
		
	  for (i=0; i<5; i++){
	printf("Digite um valor\n");
	scanf("%i", &array[i]);
	  }
	
	i=0;
	for (i=0; i<5; i++){
		printf("Vetor[%i]=%i\n", i, array[i]);
	}
	free(array);
	return(0);
}
