#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"

no * buscar_fila(fila f, int v){

	int flag = 0;	
	no *aux;	
	aux=f.inicio;
	     
	if (aux==NULL)
		printf ("Fila vazia");
	else{
		while (aux!=NULL){

			if (aux->dado== v){
				flag=1; 
				printf("VALOR: %d\n", v);
				return aux;  
			}
			else
				aux=aux->prox; 	
		}
		
		if (flag==0){
			printf("VALOR NÃO ENCONTRADO\n");
			return aux;
		}
	}
}

void imprimir(fila f){

	no *aux;

	aux=f.inicio;

	while (aux!= NULL){

		printf("%d ", aux->dado);
		aux=aux->prox;
	}

	printf("\n");
}

int tamanho_fila(fila f){
	
	no *aux;
	int cont = 0;
	
	aux=f.inicio;
	
	if (aux==NULL){
		printf ("Fila vazia");
		exit(0);	
	}
	while (aux!= NULL){

		cont++;
		aux=aux->prox;
	}

	return cont;
}

void ordenar(fila *f, int n){

	no *aux1, *aux2;
	int numero, i, flag;

	aux1= f->inicio;
	aux2= f->inicio->prox;

	if(aux1 == NULL){
		printf("LISTA VAZIA\n");
		exit(0);	
	}
	
	else{
		for(i=1;i<n;i++){			
			flag = 0;
			aux1= f->inicio;
			aux2= f->inicio->prox;		
		
			while(aux2!=NULL){		
				if(aux1->dado > aux2->dado){
					numero = aux1->dado;
					aux1->dado = aux2->dado;
					aux2->dado = numero;		
					flag = 1;				
				}
				if (flag == 0)
					exit(0);			


				aux1 = aux1->prox;		
				aux2 = aux2->prox;		
			}
		}	
	}
}
