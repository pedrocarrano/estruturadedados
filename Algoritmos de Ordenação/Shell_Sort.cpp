/*
	Descri��o:
	
			O algoritmo difere do m�todo de inser��o direta pelo fato de no lugar de considerar o array a ser 
		ordenado como um �nico segmento, ele considera v�rios segmentos sendo aplicado o m�todo de inser��o direta 
		em cada um deles. Basicamente o algoritmo passa v�rias vezes pela lista dividindo o grupo maior em menores. 
		Nos grupos menores � aplicado o m�todo da ordena��o por inser��o
	
	Complexidade:

		.PIOR CASO: O(n log�n)
		.CASO M�DIO: depende da sequ�ncia do gap
		.MELHOR CASO: O(n)

	Vantagens: 
		
		.� uma �tima op��o para arquivos de tamanho moderado. 
		.Sua implementa��o � simples e requer uma quantidade de c�digo pequena.
	
	Desvantagens:

		O tempo de execu��o do algoritmo � sens�vel � ordem inicial do arquivo.  
*/


#include <stdio.h>

void shellSort(int numbers[], int array_size);


int main(){


	int i, NUM_ITEMS = 100;
	int numbers[100];

	numbers[100] = {12,2,6,9,5,7,16,55,32,15}; 		  	

	shellSort(numbers, NUM_ITEMS);

	printf("N�meros ordenados:\n");
	
	for (i = 0; i < NUM_ITEMS; i++)
		printf("%i\n", numbers[i]);

	return 0;
}


void shellSort(int numbers[], int array_size){

	int i, j, increment, temp;

	increment = 3;
	while (increment > 0){
		for (i=0; i < array_size; i++){
			j = i;
			temp = numbers[i];
			while ((j >= increment) && (numbers[j-increment] > temp)){
				numbers[j] = numbers[j - increment];
				j = j - increment;
			}
			numbers[j] = temp;
		}
		if (increment/2 != 0)
			increment = increment/2;
		else if (increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}
