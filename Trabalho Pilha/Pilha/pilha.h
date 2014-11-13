#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

typedef struct tno{
    
	float P[MAX];
	int topo;

}pilha;


void iniciar(pilha *p){

 	p->topo=-1;
}


bool pilhaVazia(pilha p){

	return (p.topo == -1);
}


bool pilhacheia(pilha p){

	return (p.topo == MAX-1);
}


bool empilhar(pilha *p,float dado){

	if(pilhacheia(*p))
		return false;

    	p->P[++(p->topo)]=dado;
		
	return true;
}

bool desempilhar(pilha *p, float * dado){

	if(pilhaVazia(*p))
		return false;
  
   	*dado= p->P[p->topo --];
    
	return true;
}

int elementoTopo(pilha p, float *valor){

	if(pilhaVazia(p))
		return 0;
	
	*valor = p.P[p.topo];

	return 1;
}
