/*ALOCAR AREA DE MEMORIA PARA CONTER 5 NUMEROS INTEIROS. SOLICITAR AO USUARIO OS NUMEROS INTEIROS PARA PREENCHER UMA MATRIZ 2X2, 
PREENCHER-LA, USANDO POINTERS, SOMAR TODOS OS NUMEROS E COPIAR O RESULTADO PARA A AREA ALOCADA. (ESSE PROCEDIMENTO SERA REALIZADO 5 VEZES).
EXIBIR OS NUMEROS QUE ESTAO NA AREA ALOCADA*/


#include <stdio.h>
#include <stdlib.h>


void matriz(int *p)
{
	int soma = 0;
    int n,i,j,m;
    int h=0;
    int matriz[2][2];
    
    
    for(n = 0; n < 5; n++)
    {
        
        printf("Preencha a matriz de inteiros %i:\n",n+1);
        for(i = 0; i < 2;i++)
        {
            for(j = 0;j < 2;j++)
            {
                 printf("Matriz[%i][%i]: \n\n",i+1,j+1);
                 scanf("%i",&m);
                 soma += m;

            }
        }
        *p = soma;
        p++;

        }
    p -= 5;
    
    for(i=0;i<5;i++) //imprime soma de cada elemento da matriz
		printf("\n%d ", p[i]);		
		printf("\n");
		h++;
		soma = 0;
	}

int main()
{
    int *p;
    p = (int*)malloc(5*sizeof(int));
    matriz(p);    
    free(p);
    return 0;
}
