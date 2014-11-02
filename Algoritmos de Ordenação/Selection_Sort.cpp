/*

	Descri��o:
		
		 	� um algoritmo de ordena��o baseado em se passar sempre o menor valor do vetor para a 
		 primeira posi��o (ou o maior dependendo da ordem requerida), depois o de segundo menor valor para a 
		 segunda posi��o, e assim � feito sucessivamente com os (n-1) elementos restantes, at� os �ltimos dois 
		 elementos.

	Complexidade: 
		
		.PIOR CASO: O(n�)
 		.PIOR CASO - M�DIO: O(n�)
		.PIOR MELHOR CASO: O(n�)
	
	Vantagens:
			
		Funciona muito bem para listas pequenas e � de f�cil implementa��o.
	
	Desvantagens: 
		
		N�mero muito grande de movimenta��es e ordem de complexidade quadr�tica.	



*/

#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *ptr){

	int i, j, h, aux;
		
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++)
			if(ptr[i]>ptr[j]){
				aux = ptr[i];
				ptr[i]=ptr[j];
				ptr[j]= aux;
			}
			
		for(h=0;h<5;h++)
			printf("%d ", ptr[h]);	
		printf("\n");	
	}


}

int main(int argc, char *argv[]){

	int ptr[5] = {5,4,3,2,1};
	
	selectionSort(ptr);
		
	
	return 0;
}
