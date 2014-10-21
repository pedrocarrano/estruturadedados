#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n,i;
	
	n=1;	
	int *array;
	array = (int*)malloc(n*sizeof(int));
		
	  for (i=0; i<n; i++){
	printf("Digite um valor\n");
	scanf("%i", &array[i]);
	  if (array[i]<0)
	  break;
	  n++;
	}
	
	i=1;
	for (i=1; i<n; i++){
		printf("Vetor[%i]=%i\n", i, array[i-1]);
	}
	return(0);
}
