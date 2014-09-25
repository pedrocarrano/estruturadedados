#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int array[5];
     int i;
	   for (i=0; i < 5; i++){	 
         printf("Digite um numero:");
         scanf("%d", &array[i]);
    
	 }
	 i=0;
	 printf("Numeros pares sao:\n");
	 for (i=0; i<5; i++){
	 	if (array[i]%2==0)
	 	printf("%4d", array[i]);
	 }
	  return(0);
}



