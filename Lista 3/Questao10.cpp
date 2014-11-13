#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main (void){
	int tam,i,n,j;
	printf("Digite um numero");
	scanf("%i", &n);
	
	printf("Digite o tamanho do vetor");
	scanf("%i", &tam);
	
	int *array;
	array = (int*)malloc(tam*sizeof(int));	
	
    for (i=0;i<tam+1;i++){
    	array[i]=n*i;
       }
	
	for(i=0; i<tam+1; i++){	  
	  printf("Vetor[%i]=%i\n", i, array[i]);
		      
	}
	 printf("Foi gerado %i multiplos", i);
	}
