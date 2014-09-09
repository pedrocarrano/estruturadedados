#include <stdio.h>
#include <stdlib.h>

void func(int array[10])
{
	int i,x, cont;
	x=0;
	cont=1;
	for (i=0; i<10; i++){
		printf("Digite um numero:\n");
		scanf("%d", &array[i]);
		if (array[i]>x){
		x=array[i];
		cont=1;
		}
		else if (array[i]==x){
		cont++;
		}	
	
}
	printf("Maior numero: %d\n",x);
	printf("Repetidos %d vezes \n",cont);
    
}
     
 int main()
 {
 	int vetor[10];
    func(vetor);   
    
}



