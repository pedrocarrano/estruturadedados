#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tno{

 int dado;
 struct tno * prox;

}no;


typedef struct tfila{

	no * inicio;
	no * fim;

}fila;

void criarfila(fila *l);

bool filaVazia (fila *l);

bool limparFila(fila *l);

no* alocaNovoNo(int n);

bool enfileirar(fila *l, int n);

bool desenfileirar(fila *l, int *dado);
