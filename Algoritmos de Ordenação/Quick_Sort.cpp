/*

	Descri��o:
		
		 	O Quicksort adota a estrat�gia de divis�o e conquista. A estrat�gia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". 
			Em seguida o Quicksort ordena as duas sublistas de chaves menores e maiores recursivamente at� que a lista completa se encontre ordenada. 
			Os passos s�o:
            -Escolha um elemento da lista, denominado piv�;
            -Rearranje a lista de forma que todos os elementos anteriores ao piv� sejam menores que ele, e todos os elementos posteriores ao piv� sejam maiores que ele. 
            Ao fim do processo o piv� estar� em sua posi��o final e haver� duas sublistas n�o ordenadas. Essa opera��o � denominada parti��o;
            -Recursivamente ordene a sublista dos elementos menores e a sublista dos elementos maiores;
            A base da recurs�o s�o as listas de tamanho zero ou um, que est�o sempre ordenadas. 
            O processo � finito, pois a cada itera��o pelo menos um elemento � posto em sua posi��o final e n�o ser� mais manipulado na itera��o seguinte.
			
	Complexidade: 
		
		.PIOR CASO: O(n�)
 		.PIOR CASO - M�DIO: O(n log2 n)
		.PIOR MELHOR CASO: O(n log2 n)
			
	Vantagens:
			
	   � extremamente eficiente para ordenar arquivos de dados.
       Necessita de apenas uma pequena pilha como mem�ria auxiliar.
       Requer cerca de n log n compara��es em m�dia para ordenar n itens.
	
	Desvantagens: 
		
		Implementa��o delicada e dif�cil
		Tem um pior caso O(n�)
*/

#include<stdio.h>
#define MAX 20

int divide( int *vetor, int primeiro, int ultimo )
{
   int x,i,j,aux;
   x = vetor[primeiro];
   i = primeiro - 1;
   j = ultimo + 1;
   
   for(;;) 
   {
      do { j--; } while( vetor[j] > x );
      do { i++; } while( vetor[i] < x );
      
      if (i < j) 
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
      }
      else
      {
         return j;
      }
   }
}

void quickSort( int *vetor, int primeiro, int ultimo )
{
   int pivot;
   if (primeiro < ultimo) 
   {
      pivot = divide( vetor, primeiro, ultimo);
      quickSort( vetor, primeiro, pivot);
      quickSort(vetor, pivot+1, ultimo);
   }
}


	int main(){
   
    int vetor[MAX],i,n;

    printf("Digite a quantidade de numeros que quer ordenar "); 
    scanf("%d",&n); 

    printf("Quais esses numeros?");
    for(i=0;i<n;i++){
         scanf("%d",&vetor[i]);
    }

    quickSort(vetor,0,n-1);  //chama funcao

    printf("A ordenacao �:");
    for(i=0;i<n;i++){
         printf("%d ",vetor[i]);
    }

   return 0;
	
}
