/*

	Descri��o:
		
		 	Mergesort (ordena��ao por intercala��o) divide o vetor de entrada em dois subvetores com metade
            do tamanho do vetor original (em caso de tamanho �mpar, um dos subvetores ter� um elemento
            a mais que o outro). Cada um dos subvetores � ordenado recursivamente. Os dois subvetores s�o
            intercalados em um vetor tempor�rio. 
						
			Os tr�s passos �teis dos algoritmos dividir-para-conquistar, ou divide and conquer, que se aplicam ao merge sort s�o:

            Dividir: Dividir os dados em subsequ�ncias pequenas;
            Conquistar: Classificar as duas metades recursivamente aplicando o merge sort;
            Combinar: Juntar as duas metades em um �nico conjunto j� classificado.
			
	Complexidade: 
		
		.PIOR CASO: O(nlog n)
 		.PIOR CASO - M�DIO: O(nlog n)
		.PIOR MELHOR CASO: O(nlog n)
		
		Independente da situa��o dos dados no vetor, o algoritmo ir� dividir e intercalar os dados.
	
	Vantagens:
			
	   Algoritmo de ordena��o de simples implementa��o e f�cil entendimento utilizando chamadas recursivas.
	
	Desvantagens: 
		
		Alto consumo de memoria, pois utliza memoria auxiliar
		Uso de fun��es recursivas
*/

#include<stdio.h>
#define MAX 20

void mergeSort(int vetor[],int menor,int meio,int maior){

    int i,m,k,x,temp[MAX];

    x=menor;
    i=menor;
    m=meio+1;

    while((x<=meio)&&(m<=maior)){

         if(vetor[x]<=vetor[m]){
             temp[i]=vetor[x];
             x++;
         }
         else{
             temp[i]=vetor[m];
             m++;
         }
         i++;
    }

    if(x>meio){
         for(k=m;k<=maior;k++){
             temp[i]=vetor[k];
             i++;
         }
    }
    else{
         for(k=x;k<=meio;k++){
             temp[i]=vetor[k];
             i++;
         }
    }
   
    for(k=menor;k<=maior;k++){
         vetor[k]=temp[k];
    }
}

void divide(int vetor[],int menor,int maior){      //Vetor, primeiro elemento, ultimo elemento

    int meio;

    if(menor<maior){
         meio=(menor+maior)/2;    //divide o vetor em 2
         divide(vetor,menor,meio);  //divide a primeira parcela 
         divide(vetor,meio+1,maior); //divide a segunda parcela 
         mergeSort(vetor,menor,meio,maior);  //chama funcao MergeSort
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

    divide(vetor,0,n-1);  //chama funcao

    printf("A ordenacao �:");
    for(i=0;i<n;i++){
         printf("%d ",vetor[i]);
    }

   return 0;
}
