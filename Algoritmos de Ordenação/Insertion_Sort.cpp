/*
	Descri��o:
		
		 Em termos gerais, ele percorre um vetor de elementos da esquerda para a direita e � medida que avan�a vai deixando os elementos mais � esquerda ordenados. 

	Complexidade: 
		
		.PIOR CASO: O(n�)
 		.PIOR CASO - M�DIO: O(n�)
		.PIOR MELHOR CASO: O(n)
	
	Vantagens:
	
		 . A principal vantagem da ordena��o por inser��o � a sua simplicidade, al�m de mostrar um bom desempenho em listas pequenas

	Desvantagens:

		A desvantagem � que n�o possui um desempenho t�o bom quanto outros algoritmos de ordena��o. Com n� passos necess�rios para funcionar, o insertion sort tamb�m n�o funciona bem com listas grandes.
*/

#include<stdlib.h>

void insertionSort(int *vetor) {

	int i, j, tmp;
		
	for (i = 1; i < n; i++) {
		j = i;
		while (j > 0 && vetor[j - 1] > vetor[j]) {

			tmp = vetor[j];
			vetor[j] = vetor[j - 1];
			vetor[j - 1] = tmp;
			j--;
		}
	}
}

int main(){
	
	int i, vetor[5] = {5,4,3,2,1};
	
	insertionSort(vetor);

	for (i = 0; i < 5; i++)
		printf("%d ", vetor[i]);
	printf("\n");
	return 0;
}
