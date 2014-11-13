#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/time.h>
#include "fila.h"



int main(){

	fila f;
	int n=100000, tmili;

	struct timeval inicio, final;
	
	criarfila(&f);
	
	
	while ( (n > 0) && enfileirar(&f, n) ) {	
	  //  	printf("Enfileira %d\n", n);
	    	n-= 1;
    	}
	
	//printf("TAMANHO: %d\n", tamanho_fila(f));
	
	
	//
	gettimeofday(&inicio, NULL);	
	ordenar(&f, 100000);	
	//imprimir(f);	
	//buscar_fila(f, 10);
	//	
	
	//limparFila(&f);
	
	gettimeofday(&final, NULL);
    	tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    	printf("tempo decorrido: %d\n", tmili);
    	
        //while ( desenfileirar(&f, &n) ) 
    	//	printf("Desenfileira %d\n", n);

	
}
