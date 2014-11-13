#include <stdio.h>
#include <stdlib.h>

void troca (int n, char origem, char destino, char aux){
	if (n==0) return;
	  printf("Troca disco 1 de %c para %c\n\n", origem, destino);
	  troca(n-1,origem,aux,destino);
	  printf("Troca disco %d de %c para %c\n\n", n, origem, destino);
	  troca(n-1,aux,destino,origem);

};

int main(){
   
	   int discos;
	   printf("Numero de discos ");
	   scanf("%d",&discos);
	   troca(discos,'A','C','B');	    
	   return 0;
}
