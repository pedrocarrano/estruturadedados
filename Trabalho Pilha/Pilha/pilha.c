#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "pilha.h"
	
int main(){

	
	int tmili, i;	 
	float n=100.0, a;
	struct timeval inicio, final;
    
	
	pilha p;
	iniciar(&p);

	

	while ( empilhar(&p, n) ) {
		printf("Empilha %f\n", n);
		n= rand() % 100;
    	}
	
	    	
	elementoTopo(p, &a);
	//procurar(p, 3.000000);

	//ordenar(&p);	
	
	//procurar(p, 10.000000);

		 	
	//while ( desempilhar(&p, &n) ) 
	//	printf("Desempilha %f\n", n);
	
	
	
}
