#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n,i, par, impar;
	par=0;
	impar=0;
	
	printf("Digite o tamanho do vetor:\n");
	scanf("%i", &n);
	
	int *array;
	array = (int*)malloc(n*sizeof(int));
	
	
	  for (i=0; i<n; i++){
	printf("Digite um valor\n");
	scanf("%i", &array[i]);
	  if (array[i]%2==0){
	    par++;
      }
	else
	    impar++;
	}
	
	printf("Temos %i pares\n", par);
	printf("Temos %i impares\n", impar);
	 
	}
