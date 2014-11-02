/*
	Descri��o:

		O Bubble-Sort � um algoritmo de ordena��o. A finalidade deste algoritmo � percorrer o vetor um n�mero
	de vezes com a finalidade de posicionar o maior elemento na �ltima posi��o da fila.  


	Complexidade :
		
		.PIOR CASO: O(n�)
 		.PIOR CASO - M�DIO: O(n�)
		.PIOR MELHOR CASO: O(n)

	Vantagens:
		
		.Simples de implementar
		.Est�vel
	
	Desvantagens:
		
		.Lento quando a lista a ser ordenada cont�m muitos itens.
		

*/
#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *p){

	int n, k,  i, j, aux, flag=0, cont=0;

	for(i=0;i<20;i++){
		for(j=1;j<20;j++){
			if(p[j-1]>p[j]){
				aux = p[j-1];
				p[j-1]=p[j];
				p[j] = aux;
				flag = 1;			
			}
		}
			
		if(flag == 0)
			break;		
	}
	
	
	for(k=0;k<20;k++)
		printf("%d ", p[k]);
	printf("\n");

}
int main(){


	int p[20]={20,19,18,17,16,15,37,45,200,0,10,91,28,73,6,54,19,80,2,1};
	
	bubbleSort(p);		
	
	return 0;
}
