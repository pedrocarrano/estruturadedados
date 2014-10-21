#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main (void){
	int tam,i,n,j;
	printf("Digite o tamanho da String:");
	scanf("%i", &n);
	
	char *string;
	string = (char*)malloc(n*sizeof(char));	
	
    fflush(stdin);
    printf("Digite uma string:");
    gets(string);
	
	tam=strlen(string);
	
	for(i=0; i<tam; i++){	  
	  if (string[i] == 'a' || 'e' || 'i' || 'o' || 'u')
        string[i] = ' ';
		      
	}
	
			
	printf("A string sem as vogais: ");
    for (i=0; i<tam; i++)
    {
        printf("%c", string[i]);
    }

    	return(0);
	 
	}
